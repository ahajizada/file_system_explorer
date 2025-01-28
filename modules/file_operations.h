#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <string>

void listFiles(const std::string& path);
void displayTree(const std::string& path, int depth = 0);
void searchFiles(const std::string& path, const std::string& query);
void sortFilesBySize(const std::string& path);

#endif 
