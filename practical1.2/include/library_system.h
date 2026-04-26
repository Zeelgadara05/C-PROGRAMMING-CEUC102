#ifndef LIBRARY_SYSTEM_H
#define LIBRARY_SYSTEM_H
#include<iostream>
#include<string>
using namespace std;

class library_system
{
    public:
        void add_new_book();
        int issue_book(string);
        int return_book(string);
        void display_book(int);

    protected:

    private:
        int id;
        int copies;
        string title;
        string author;
};

#endif // LIBRARY_SYSTEM_H
