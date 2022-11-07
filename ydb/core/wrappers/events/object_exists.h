#pragma once
#include "abstract.h"
#include "common.h"

#include <ydb/core/base/events.h>
#include <ydb/core/protos/flat_scheme_op.pb.h>
#include <ydb/library/accessor/accessor.h>

#include <contrib/libs/aws-sdk-cpp/aws-cpp-sdk-s3/include/aws/s3/model/HeadObjectRequest.h>
#include <contrib/libs/aws-sdk-cpp/aws-cpp-sdk-s3/include/aws/s3/model/HeadObjectResult.h>
#include <library/cpp/actors/core/event_local.h>
#include <util/generic/ptr.h>

namespace NKikimr::NWrappers::NExternalStorage {

class TEvCheckObjectExistsRequest: public TGenericRequest<TEvCheckObjectExistsRequest,
    EvCheckObjectExistsRequest, Aws::S3::Model::ListObjectsRequest> {
private:
    using TBase = TGenericRequest<TEvCheckObjectExistsRequest, EvCheckObjectExistsRequest, Aws::S3::Model::ListObjectsRequest>;
public:
    using TBase::TBase;
};

class TEvCheckObjectExistsResponse: public TBaseGenericResponse<TEvCheckObjectExistsResponse,
    EvCheckObjectExistsResponse, Aws::S3::Model::ListObjectsResult> {
private:
    using TBase = TBaseGenericResponse<TEvCheckObjectExistsResponse, EvCheckObjectExistsResponse, Aws::S3::Model::ListObjectsResult>;
public:
    using TBase::TBase;
    bool IsExists() const {
        return Result.IsSuccess() && Result.GetResult().GetContents().size();
    }
};
}
