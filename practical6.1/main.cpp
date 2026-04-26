#include "Shape.h"
#include <iostream>

using namespace std;

int main()
{
    int choice,num;

    circle* c = nullptr;

    m:cout<<"1.Enter The Radius \n2.Calculate Area \n3.Exits \n\n";

    cout<<"Enter Your Choice ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"How many circle you enter ";
            cin>>num;

            c = new circle(num); // Create the circle object dynamically
            c->inputdata();
            goto m;

        case 2:
            if(c==nullptr)
            {
                cout<<"Please enter radius first \n\n";
            }
            else
            {
                c->calculatearea();
                c->getarea();
            }
            goto m;

        case 3:
            cout<<"exiting system";
            break;

        default:
            cout<<"Invalid choice.\n";
    }
    return 0;
}
