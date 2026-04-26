#include <iostream>
#include <string>
#include "StudentFormatter.h"

using namespace std;

int main() {
    StudentFormatter formatter;
    int numStudents;
    string numStr;

    cout << "Enter the number of students to process: ";
    getline(cin, numStr);

    if(numStr.length() > 0) {
        numStudents = stoi(numStr);
    } else {
        numStudents = 0;
    }

    for (int i = 0; i < numStudents; i++) {
        string name, markStr, feeStr;
        float mark, fee;

        cout << "\nEnter details for Student " << (i + 1) << ":\n";
        cout << "Name: ";
        getline(cin, name);

        cout << "Marks: ";
        getline(cin, markStr);
        mark = stof(markStr);

        cout << "Fees: ";
        getline(cin, feeStr);
        fee = stof(feeStr);

        formatter.addStudent(name, mark, fee);
    }

    cout << "\n\n";
    formatter.displayTable();

    return 0;
}
