#include <yt/yql/plugin/bridge/interface.h>
#include <yt/yql/plugin/native/plugin.h>

#include <type_traits>

using namespace NYT::NYqlPlugin;
using namespace NYT::NYson;

extern "C" {

////////////////////////////////////////////////////////////////////////////////

ssize_t BridgeGetABIVersion()
{
    return 0;
}

TBridgeYqlPlugin* BridgeCreateYqlPlugin(const TBridgeYqlPluginOptions* bridgeOptions)
{
    YT_VERIFY(bridgeOptions->RequiredABIVersion == BridgeGetABIVersion());

    static const TYsonString EmptyMap = TYsonString(TString("{}"));

    THashMap<TString, TString> clusters;
    for (auto clusterIndex = 0; clusterIndex < bridgeOptions->ClusterCount; ++clusterIndex) {
        const auto& Cluster = bridgeOptions->Clusters[clusterIndex];
        clusters[Cluster.Cluster] = Cluster.Proxy;
    }

    auto operationAttributes = bridgeOptions->OperationAttributes
        ? TYsonString(TString(bridgeOptions->OperationAttributes, bridgeOptions->OperationAttributesLength))
        : EmptyMap;

    auto singletonsConfig = bridgeOptions->SingletonsConfig
        ? TYsonString(TString(bridgeOptions->SingletonsConfig, bridgeOptions->SingletonsConfigLength))
        : EmptyMap;

    TYqlPluginOptions options{
        .SingletonsConfig = singletonsConfig,
        .MRJobBinary = TString(bridgeOptions->MRJobBinary),
        .UdfDirectory = TString(bridgeOptions->UdfDirectory),
        .Clusters = std::move(clusters),
        .DefaultCluster = std::optional<TString>(bridgeOptions->DefaultCluster),
        .OperationAttributes = operationAttributes,
        .MaxFilesSizeMb = static_cast<int>(bridgeOptions->MaxFilesSizeMb),
        .MaxFileCount = static_cast<int>(bridgeOptions->MaxFileCount),
        .DownloadFileRetryCount = static_cast<int>(bridgeOptions->DownloadFileRetryCount),
        .YTTokenPath = TString(bridgeOptions->YTTokenPath),
        .LogBackend = std::move(*reinterpret_cast<THolder<TLogBackend>*>(bridgeOptions->LogBackend)),
    };
    auto nativePlugin = CreateYqlPlugin(options);
    return nativePlugin.release();
}

void BridgeFreeYqlPlugin(TBridgeYqlPlugin* plugin)
{
    auto* nativePlugin = reinterpret_cast<IYqlPlugin*>(plugin);
    delete nativePlugin;
}

void BridgeFreeQueryResult(TBridgeQueryResult* result)
{
    delete result->TaskInfo;
    delete result->Statistics;
    delete result->Plan;
    delete result->YsonResult;
    delete result->YsonError;
    delete result;
}

void FillString(const char*& str, ssize_t& strLength, const std::optional<TString>& original)
{
    if (!original) {
        str = nullptr;
        strLength = 0;
        return;
    }
    char* copy = new char[original->size() + 1];
    memcpy(copy, original->data(), original->size() + 1);
    str = copy;
    strLength = original->size();
}

TBridgeQueryResult* BridgeRun(TBridgeYqlPlugin* plugin, const char* queryId, const char* impersonationUser, const char* queryText, const char* settings, const TBridgeQueryFile* bridgeFiles, int bridgeFileCount)
{
    static const auto EmptyMap = TYsonString(TString("{}"));

    auto* nativePlugin = reinterpret_cast<IYqlPlugin*>(plugin);
    auto* bridgeResult = new TBridgeQueryResult;

    std::vector<TQueryFile> files(bridgeFileCount);
    for (int index = 0; index < bridgeFileCount; index++) {
        const auto& file = bridgeFiles[index];
        files.push_back(TQueryFile {
            .Name = TStringBuf(file.Name, file.NameLength),
            .Content = TStringBuf(file.Content, file.ContentLength),
            .Type = file.Type,
        });
    }

    auto result = nativePlugin->Run(
        NYT::TGuid::FromString(queryId),
        TString(impersonationUser),
        TString(queryText),
        settings ? TYsonString(TString(settings)) : EmptyMap,
        files);
    FillString(bridgeResult->YsonResult, bridgeResult->YsonResultLength, result.YsonResult);
    FillString(bridgeResult->Plan, bridgeResult->PlanLength, result.Plan);
    FillString(bridgeResult->Statistics, bridgeResult->StatisticsLength, result.Statistics);
    FillString(bridgeResult->Progress, bridgeResult->ProgressLength, result.Progress);
    FillString(bridgeResult->TaskInfo, bridgeResult->TaskInfoLength, result.TaskInfo);
    FillString(bridgeResult->YsonError, bridgeResult->YsonErrorLength, result.YsonError);

    return bridgeResult;
}

TBridgeQueryResult* BridgeGetProgress(TBridgeYqlPlugin* plugin, const char* queryId)
{
    auto* nativePlugin = reinterpret_cast<IYqlPlugin*>(plugin);
    auto* bridgeResult = new TBridgeQueryResult;

    auto result = nativePlugin->GetProgress(NYT::TGuid::FromString(queryId));
    FillString(bridgeResult->Plan, bridgeResult->PlanLength, result.Plan);
    FillString(bridgeResult->Progress, bridgeResult->ProgressLength, result.Progress);

    return bridgeResult;
}

////////////////////////////////////////////////////////////////////////////////

// Validate that the all functions from the bridge interface are implemented with proper signatures.

#define XX(function) static_assert(std::is_same_v<decltype(&(function)), TFunc ## function*>);
FOR_EACH_BRIDGE_INTERFACE_FUNCTION(XX)
#undef XX

////////////////////////////////////////////////////////////////////////////////

} // extern "C"
