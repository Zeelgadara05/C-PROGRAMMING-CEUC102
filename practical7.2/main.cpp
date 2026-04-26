#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
    Complex c1,c2,c3,c4;

    cout<<"Enter The First Complex Number "<<endl;
    c1.getdata();
    cout<<endl;

    cout<<"Enter The Second Complex Number "<<endl;
    c2.getdata();
    cout<<endl;

    cout<<"Sum Of Complex Number Is "<<endl;
    c3=c1+c2;
    c3.display();

    cout<<"Subtraction Of Complex Is "<<endl;
    c4=c1-c2;
    c4.display();
    return 0;
}
