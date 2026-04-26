#ifndef OVERLOADING_H
#define OVERLOADING_H
#include <iostream>
#include<string>

using namespace std;

class overloading
{
    public:
       void setdata(string);
       overloading operator + (overloading);
       void display();

    protected:

    private:
        string num1;
};

#endif // OVERLOADING_H
