#include "DirectorySystem.h"
#include <iostream>

using namespace std;

void DirectorySystem::addFolder(const string& folderName) {
    if (directories.find(folderName) == directories.end()) {
        directories[folderName] = vector<string>();
        cout << "Folder '" << folderName << "' added successfully.\n";
    } else {
        cout << "Folder '" << folderName << "' already exists.\n";
    }
}

void DirectorySystem::addFile(const string& folderName, const string& fileName) {
    map<string, vector<string>>::iterator it = directories.find(folderName);

    if (it != directories.end()) {
        it->second.push_back(fileName);
        cout << "File '" << fileName << "' added to '" << folderName << "'.\n";
    } else {
        cout << "Error: Folder '" << folderName << "' does not exist. Create the folder first.\n";
    }
}

void DirectorySystem::displaySystem() const {
    cout << "\n--- Directory Structure ---\n";

    if (directories.empty()) {
        cout << "The directory system is empty.\n";
        return;
    }

    for (map<string, vector<string>>::const_iterator it = directories.begin(); it != directories.end(); ++it) {
        cout << "[Folder] " << it->first << "\n";

        if (it->second.empty()) {
            cout << "    (Empty)\n";
        } else {
            for (vector<string>::const_iterator vit = it->second.begin(); vit != it->second.end(); ++vit) {
                cout << "    |-- " << *vit << "\n";
            }
        }
    }
}
