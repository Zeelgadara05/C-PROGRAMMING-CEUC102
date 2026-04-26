#include "Shape.h"
#include <iostream>

using namespace std;

int i;

Shape::Shape(int x)
{
    sized=x;

    radius= new int[x];
}

void Shape :: inputdata()
{
    for(i=0;i<sized;i++)
    {
        cout<<"enter the radius i "<<i+1<<"  ";
        cin>>radius[i];
    }
}

circle::circle(int x) : Shape(x)
{
    area = new float[x];
}

void circle :: calculatearea()
{
    for(int i=0;i<sized;i++)
    {
        area[i]=3.14*radius[i]*radius[i];
    }
}

void circle :: getarea()
{
    for(int i=0;i<sized;i++)
    {
        cout<<"Area of circle "<<(i+1)<<" is: "<<area[i]<<endl;
    }
}

Shape::~Shape()
{
    delete[] radius;
}

circle::~circle()
{
    delete[] area;
}
