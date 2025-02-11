#!/bin/bash

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <ClassName>"
    exit 1
fi

CLASS_NAME=$1
HEADER_FILE="${CLASS_NAME}.cpp"
INCLUDE_GUARD="$(echo "${CLASS_NAME}_HPP" | tr '[:lower:]' '[:upper:]')"

cat <<EOF > "$HEADER_FILE"
#include "$CLASS_NAME.hpp"


$CLASS_NAME::$CLASS_NAME() {}

$CLASS_NAME::$CLASS_NAME(const $CLASS_NAME& other) {
    //Logic
}

$CLASS_NAME& $CLASS_NAME::operator=(const $CLASS_NAME& other) {
    if (this != &other) {
        //Logic
    }
    return *this;
}

$CLASS_NAME::~$CLASS_NAME() {}
EOF

echo "CPP file '$HEADER_FILE' created successfully."
