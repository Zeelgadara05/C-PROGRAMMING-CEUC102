#include "rect_system.h"
#include <iostream>

using namespace std;

void rect_system :: enter_dimention()
{
    cout<<"Enter the Length: ";
    cin>>length;
    cout<<"Enter the Width: ";
    cin>>width;
    cout<<endl;
}

float rect_system :: area_of_rect()
{
    area=length*width;
    return area;
}

float rect_system :: perimeter_of_rect()
{
    perimeter=2*(length+width);
    return perimeter;
}
