# File System Explorer

## Project Description
A C++ command-line tool to explore and interact with file systems. Supports:
- Listing files and directories.
- Recursive tree structure display.
- Searching files by name or extension.
- Sorting files by size, type, or last modified date.

## Features
- **List Files**: `ls <path>`
- **Display Tree**: `tree <path>`
- **Search Files**: `search <path> <query>`
- **Sort Files**: `sort <path>`

## How to Run
1. Compile the project:
   - g++ -o file_system_explorer main.cpp modules/file_operations.cpp -std=c++17
2. Run the tool:
   - ./file_system_explorer
3. Compile and run tests:
   - ./run_tests.sh
