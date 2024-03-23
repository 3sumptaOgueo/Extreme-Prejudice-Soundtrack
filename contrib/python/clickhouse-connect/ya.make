# Generated by devtools/yamaker (pypi).

PY3_LIBRARY()

VERSION(0.7.2)

LICENSE(Apache-2.0)

PEERDIR(
    contrib/python/certifi
    contrib/python/lz4
    contrib/python/pytz
    contrib/python/urllib3
    contrib/python/zstandard
)

ADDINCL(
    FOR cython contrib/python/clickhouse-connect
)

NO_COMPILER_WARNINGS()

NO_LINT()

PY_SRCS(
    TOP_LEVEL
    clickhouse_connect/__init__.py
    clickhouse_connect/__version__.py
    clickhouse_connect/cc_sqlalchemy/__init__.py
    clickhouse_connect/cc_sqlalchemy/datatypes/__init__.py
    clickhouse_connect/cc_sqlalchemy/datatypes/base.py
    clickhouse_connect/cc_sqlalchemy/datatypes/sqltypes.py
    clickhouse_connect/cc_sqlalchemy/ddl/__init__.py
    clickhouse_connect/cc_sqlalchemy/ddl/custom.py
    clickhouse_connect/cc_sqlalchemy/ddl/tableengine.py
    clickhouse_connect/cc_sqlalchemy/dialect.py
    clickhouse_connect/cc_sqlalchemy/inspector.py
    clickhouse_connect/cc_sqlalchemy/sql/__init__.py
    clickhouse_connect/cc_sqlalchemy/sql/ddlcompiler.py
    clickhouse_connect/cc_sqlalchemy/sql/preparer.py
    clickhouse_connect/common.py
    clickhouse_connect/datatypes/__init__.py
    clickhouse_connect/datatypes/base.py
    clickhouse_connect/datatypes/container.py
    clickhouse_connect/datatypes/format.py
    clickhouse_connect/datatypes/network.py
    clickhouse_connect/datatypes/numeric.py
    clickhouse_connect/datatypes/registry.py
    clickhouse_connect/datatypes/special.py
    clickhouse_connect/datatypes/string.py
    clickhouse_connect/datatypes/temporal.py
    clickhouse_connect/dbapi/__init__.py
    clickhouse_connect/dbapi/connection.py
    clickhouse_connect/dbapi/cursor.py
    clickhouse_connect/driver/__init__.py
    clickhouse_connect/driver/buffer.py
    clickhouse_connect/driver/client.py
    clickhouse_connect/driver/common.py
    clickhouse_connect/driver/compression.py
    clickhouse_connect/driver/constants.py
    clickhouse_connect/driver/context.py
    clickhouse_connect/driver/ctypes.py
    clickhouse_connect/driver/dataconv.py
    clickhouse_connect/driver/ddl.py
    clickhouse_connect/driver/errors.py
    clickhouse_connect/driver/exceptions.py
    clickhouse_connect/driver/external.py
    clickhouse_connect/driver/httpclient.py
    clickhouse_connect/driver/httputil.py
    clickhouse_connect/driver/insert.py
    clickhouse_connect/driver/models.py
    clickhouse_connect/driver/npconv.py
    clickhouse_connect/driver/npquery.py
    clickhouse_connect/driver/options.py
    clickhouse_connect/driver/parser.py
    clickhouse_connect/driver/query.py
    clickhouse_connect/driver/summary.py
    clickhouse_connect/driver/tools.py
    clickhouse_connect/driver/transform.py
    clickhouse_connect/driver/types.py
    clickhouse_connect/driverc/__init__.py
    clickhouse_connect/entry_points.py
    clickhouse_connect/json_impl.py
    clickhouse_connect/tools/__init__.py
    clickhouse_connect/tools/datagen.py
    clickhouse_connect/tools/testing.py
    CYTHON_CPP
    clickhouse_connect/driverc/buffer.pyx
    clickhouse_connect/driverc/dataconv.pyx
    clickhouse_connect/driverc/npconv.pyx
)

RESOURCE_FILES(
    PREFIX contrib/python/clickhouse-connect/
    .dist-info/METADATA
    .dist-info/entry_points.txt
    .dist-info/top_level.txt
    clickhouse_connect/py.typed
)

END()
