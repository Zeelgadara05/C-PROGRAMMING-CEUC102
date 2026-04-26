#ifndef FUEL_H
#define FUEL_H
#include <iostream>
#include<string>

using namespace std;


class fuel
{
    public:
        fuel(string);
        string getfuel();

    protected:

    private:
        string fueltype;
};

class brand
{
    string carbrand;

    public:
        brand(string);
        string getbrand();
};

class car : public fuel, brand
{
    public:
        car(string,string);
        void display();
};

#endif // FUEL_H
