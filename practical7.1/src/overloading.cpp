#include "overloading.h"
#include <iostream>
#include<string>

using namespace std;

void overloading :: setdata(string x)
{
    num1=x;
}

overloading overloading :: operator + (overloading od)
{
    overloading ol;
    ol.num1=num1 +" "+ od.num1;
    return ol;
}

void overloading :: display()
{
    cout<<"Sum is "<<num1;
}


