#include "StudentFormatter.h"
#include <iomanip>

using namespace std;

ostream& currency(ostream& os) {
    os << "Rs. ";
    return os;
}

StudentFormatter::StudentFormatter() {
    count = 0;
}

void StudentFormatter::addStudent(const string& name, float mark, float fee) {
    if (count < 50) {
        names[count] = name;
        marks[count] = mark;
        fees[count] = fee;
        count++;
    }
}

void StudentFormatter::displayTable() const {
    cout << setfill('-') << setw(60) << "-" << endl;
    cout << setfill(' ');

    cout << left << setw(20) << "Student Name"
         << right << setw(15) << "Marks"
         << right << setw(20) << "Fees" << endl;

    cout << setfill('-') << setw(60) << "-" << endl;
    cout << setfill(' ');

    for (int i = 0; i < count; i++) {
        cout << left << setw(20) << names[i]
             << right << setw(15) << fixed << setprecision(2) << marks[i]
             << right << setw(15) << currency << fixed << setprecision(2) << fees[i] << endl;
    }

    cout << setfill('-') << setw(60) << "-" << endl;
}
