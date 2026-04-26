#include "fuel.h"
#include <iostream>
#include<string>

using namespace std;

car :: car(string x, string y):fuel(x),brand(y)
{

}

fuel :: fuel(string x)
{
    fueltype=x;
}

brand :: brand(string y)
{
    carbrand=y;
}

string fuel :: getfuel()
{
    return fueltype;
}

string brand :: getbrand()
{
    return carbrand;
}

void car :: display()
{
    cout<<"Brand: "<<getbrand()<<" Fuel Type: "<<getfuel()<<endl;
}
