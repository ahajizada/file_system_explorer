#!/bin/bash

echo "Compiling tests..."
g++ -o tests/test_runner tests/test_cases.cpp modules/file_operations.cpp -std=c++17
if [ $? -eq 0 ]; then
    echo "Running tests..."
    ./tests/test_runner
else
    echo "Compilation failed."
fi
