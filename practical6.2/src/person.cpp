#include "person.h"
#include <iostream>
#include<string>

using namespace std;

manager :: manager(string x, int y, string z, int w):employee(y,z,w)
{
    department=x;
}

employee :: employee(int y,string z,int w):person(z,w)
{
    id=y;
}

person :: person(string z,int w)
{
    name=z;
    age=w;
}

string person :: getpersonname()
{
    return name;
}

int person :: getpersonage()
{
    return age;
}

int employee :: getemployeedata()
{
    return id;
}

void manager :: displaydata()
{
    cout<<"Person Name "<<getpersonname()<<endl;
    cout<<"Person Age "<<getpersonage()<<endl;
    cout<<"Person ID "<<getemployeedata()<<endl;
    cout<<"Person Department "<<department<<endl;
}
