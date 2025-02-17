#!/bin/bash

# if [ "$#" -ne 1 ]; then
#     echo "Usage: $0 <ClassName>"
#     exit 1
# fi

CLASS_NAME=$1
_FILE="${CLASS_NAME}.hpp"
INCLUDE_GUARD="$(echo "${CLASS_NAME}_HPP" | tr '[:lower:]' '[:upper:]')"

cat <<EOF > "$_FILE"
#ifndef $INCLUDE_GUARD
#define $INCLUDE_GUARD

#include <iostream>

class $CLASS_NAME {
    private:

    public:
        $CLASS_NAME();
        $CLASS_NAME( const $CLASS_NAME &other );
        $CLASS_NAME& operator=( const $CLASS_NAME &other );
        ~${CLASS_NAME}();

};

#endif
EOF
mv $_FILE $2
echo "Header file '$_FILE' created successfully."
