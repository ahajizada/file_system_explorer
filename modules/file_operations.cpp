#include "file_operations.h"
#include <iostream>
#include <filesystem>
#include <vector>
#include <algorithm>

namespace fs = std::filesystem;

void listFiles(const std::string& path) {
    try {
        for (const auto& entry : fs::directory_iterator(path)) {
            std::cout << entry.path().filename() << "\n";
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

void displayTree(const std::string& path, int depth) {
    try {
        for (const auto& entry : fs::directory_iterator(path)) {
            std::cout << std::string(depth * 2, ' ') << entry.path().filename() << "\n";
            if (fs::is_directory(entry.status())) {
                displayTree(entry.path().string(), depth + 1);
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

void searchFiles(const std::string& path, const std::string& query) {
    try {
        for (const auto& entry : fs::recursive_directory_iterator(path)) {
            if (entry.path().filename().string().find(query) != std::string::npos) {
                std::cout << entry.path() << "\n";
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}



void sortFilesBySize(const std::string& path) {
    try {
        std::vector<fs::directory_entry> entries(fs::directory_iterator(path), {});
        std::sort(entries.begin(), entries.end(), [](const fs::directory_entry& a, const fs::directory_entry& b) {
            return fs::file_size(a) < fs::file_size(b);
        });

        for (const auto& entry : entries) {
            std::cout << entry.path().filename() << " (" << fs::file_size(entry) << " bytes)\n";
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}
