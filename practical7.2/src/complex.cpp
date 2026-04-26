#include "complex.h"
#include <iostream>

using namespace std;

void Complex :: getdata()
{
    cout<<"Enter The Real Number ";
    cin>>num1;

    cout<<"Enter The Imaginary Number ";
    cin>>num2;
}

Complex Complex :: operator + (Complex m)
{
    Complex temp;
    temp.num1=num1+m.num1;
    temp.num2=num2+m.num2;

    return temp;
}

Complex Complex :: operator - (Complex m)
{
    Complex temp;
    temp.num1=num1-m.num1;
    temp.num2=num2-m.num2;

    return temp;
}

void Complex :: display()
{
    cout<<"Real Part Is "<<num1<<endl;
    cout<<"Imaginary Part Is "<<num2<<endl;
    cout<<endl;
}
