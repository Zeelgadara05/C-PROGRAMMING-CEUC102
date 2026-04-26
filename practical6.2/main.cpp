#include "person.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string pname,dp;
    int ag,mid;

    cout<<"Enter the Person Name ";
    cin>>pname;

    cout<<"Enter the Person Age ";
    cin>>ag;

    cout<<"Enter the Person ID ";
    cin>>mid;

    cout<<"Enter the Person Department ";
    cin>>dp;
    cout<<endl;

    manager m(dp,mid,pname,ag);

    cout<<"Person details \n\n";
    m.displaydata();

    return 0;
}
