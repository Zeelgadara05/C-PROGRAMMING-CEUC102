#ifndef STUDENTFORMATTER_H
#define STUDENTFORMATTER_H

#include <string>
#include <iostream>

using namespace std;

ostream& currency(ostream& os);

class StudentFormatter {
private:
    string names[50];
    float marks[50];
    float fees[50];
    int count;

public:
    StudentFormatter();
    void addStudent(const string& name, float mark, float fee);
    void displayTable() const;
};

#endif
