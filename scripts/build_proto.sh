#!/bin/bash
CLEAN="src/proto"
PYTHON_OUT="src/"
PROTO_IN="proto"

command -v protoc &> /dev/null
if [ $? -ne 0 ]; then
    echo -ne "Install protobuf\n"
    exit 1
fi

rm -rf "${CLEAN}"
find ${PROTO_IN} -name "*.proto" -print0 | xargs -0 protoc --cpp_out=${PYTHON_OUT}

# Execute clang-format
/bin/bash ./scripts/format_code.sh

