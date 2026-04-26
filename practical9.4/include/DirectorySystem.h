#ifndef DIRECTORYSYSTEM_H
#define DIRECTORYSYSTEM_H

#include <string>
#include <vector>
#include <map>

using namespace std;

class DirectorySystem {
private:
    map<string, vector<string>> directories;

public:
    void addFolder(const string& folderName);
    void addFile(const string& folderName, const string& fileName);
    void displaySystem() const;
};

#endif
