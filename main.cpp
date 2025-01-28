#include "file_operations.h"

int main() {
    std::string command, path, query;
    std::cout << "File System Explorer > ";

    while (std::cin >> command) {
        if (command == "ls") {
            std::cin >> path;
            listFiles(path);
        } else if (command == "tree") {
            std::cin >> path;
            displayTree(path);
        } else if (command == "search") {
            std::cin >> path >> query;
            searchFiles(path, query);
        } else if (command == "sort") {
            std::cin >> path;
            sortFilesBySize(path);
        } else if (command == "exit") {
            break;
        } else {
            std::cout << "Invalid command. Try 'ls', 'tree', 'search', 'sort', or 'exit'.\n";
        }
        std::cout << "File System Explorer > ";
    }
    return 0;
}
