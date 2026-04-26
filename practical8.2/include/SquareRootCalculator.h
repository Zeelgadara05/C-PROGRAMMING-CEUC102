#ifndef SQUAREROOTCALCULATOR_H
#define SQUAREROOTCALCULATOR_H

#include <exception>
#include <string>
#include <iostream>

using namespace std;


class NegativeNumberException : public exception
{
    private:
        string message;

    public:
        NegativeNumberException(string& msg);
        char* what();
};

class SquareRootCalculator
{
    public:
        double calculate(double number);
};

#endif
