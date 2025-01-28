#include "../modules/file_operations.h"
#include <iostream>
#include <cassert>

void testListFiles() {
    std::cout << "Testing listFiles()...\n";
    listFiles("tests/sample_directory");
    std::cout << "listFiles() test passed.\n";
}

void testDisplayTree() {
    std::cout << "Testing displayTree()...\n";
    displayTree("tests/sample_directory");
    std::cout << "displayTree() test passed.\n";
}

void testSearchFiles() {
    std::cout << "Testing searchFiles()...\n";
    searchFiles("tests/sample_directory", "file3.png");
    std::cout << "searchFiles() test passed.\n";
}

void testSortFilesBySize() {
    std::cout << "Testing sortFilesBySize()...\n";
    sortFilesBySize("tests/sample_directory");
    std::cout << "sortFilesBySize() test passed.\n";
}

int main() {
    std::cout << "Running tests...\n";
    testListFiles();
    testDisplayTree();
    testSearchFiles();
    testSortFilesBySize();
    std::cout << "All tests passed!\n";
    return 0;
}
