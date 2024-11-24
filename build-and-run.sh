#!/bin/bash

# Check if the first argument is "DEBUG"
if [ "$1" == "DEBUG" ]; then
    BUILD_TYPE=Debug
    echo "Debug mode enabled"
else
    BUILD_TYPE=Release
fi

# Generate build files with the appropriate build type
cmake -S . -B build -DCMAKE_BUILD_TYPE=$BUILD_TYPE

# Build the project
cmake --build build

# Check if the build was successful
if [ $? -eq 0 ]; then
    echo "------------------------Running Tests------------------------"
    ./build/myexample
else
    echo "Build failed. Tests will not run."
    exit 1
fi
