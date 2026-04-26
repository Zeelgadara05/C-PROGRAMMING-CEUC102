#include <iostream>
#include <string>
#include "DirectorySystem.h"

using namespace std;

int main() {
    DirectorySystem ds;
    int choice = 0;
    string inputStr;

    do {
        cout << "\n=== Directory Management System ===\n";
        cout << "1. Add a Folder\n";
        cout << "2. Add a File to a Folder\n";
        cout << "3. Display All Folders and Files\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        getline(cin, inputStr);
        if (inputStr.length() > 0) {
            choice = inputStr[0] - '0';
        } else {
            choice = 0;
        }

        if (choice == 1) {
            string folderName;
            cout << "Enter new folder name: ";
            getline(cin, folderName);
            if (folderName.length() > 0) {
                ds.addFolder(folderName);
            }
        }
        else if (choice == 2) {
            string folderName, fileName;
            cout << "Enter existing folder name: ";
            getline(cin, folderName);
            cout << "Enter new file name: ";
            getline(cin, fileName);

            if (folderName.length() > 0 && fileName.length() > 0) {
                ds.addFile(folderName, fileName);
            }
        }
        else if (choice == 3) {
            ds.displaySystem();
        }

    } while (choice != 4);

    return 0;
}
