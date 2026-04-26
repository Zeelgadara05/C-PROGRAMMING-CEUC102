#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include<string>

using namespace std;

class person
{
    public:
        person(string,int);
        string getpersonname();
        int getpersonage();

    protected:

    private:
        string name;
        int age;
};

class employee : public person
{
    private:
        int id;

    public:
        employee(int,string,int);
        int getemployeedata();
};

class manager : public employee
{
    string department;

    public:
        manager(string,int,string,int);
        void displaydata();
};

#endif // PERSON_H
