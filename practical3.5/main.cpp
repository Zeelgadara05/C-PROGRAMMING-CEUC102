#include "SuperDigit.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string n;
    int k;

    cout<<"SUPER DIGIT ANALYTICS TOOL\n";
    cout<<"Enter the base number string (n): ";
    cin>>n;

    k=n.length();

    SuperDigit sd;
    int result = sd.findSuperDigit(n, k);

    cout<<"The Super Digit is: "<<result<<"\n";
    return 0;
}
