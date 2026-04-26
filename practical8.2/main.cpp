#include "SquareRootCalculator.h"
#include <iostream>

using namespace std;

int main()
{
    SquareRootCalculator calculator;
    double num;

    cout<<"Square Root Calculator \n";
    cout<<"Enter a number: ";
    cin >> num;

    try
    {
        double result=calculator.calculate(num);
        cout<<"The square root of "<<num<<" is "<<result<<"\n";
    }
    catch (const NegativeNumberException& e)
    {
        cout<<e.what()<<"\n";
    }

    return 0;
}
