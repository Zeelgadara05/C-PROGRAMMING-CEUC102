#include "overloading.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s1,s2;

    cout<<"Enter One string ";
    cin>>s1;

    cout<<"Enter Second string ";
    cin>>s2;

    overloading o1,o2,o3;
    o1.setdata(s1);
    o2.setdata(s2);
    o3=o1+o2;
    o3.display();

    return 0;
}
