#include "fuel.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string fuel, mbrand;
    int num,i;

    cout<<"How many cars do you want to enter? ";
    cin>>num;

    cout<<endl;

    car** showroom = new car*[num];

    for(i=0;i<num;i++)
    {
        cout<<"Enter The Fuel Type Of Vehicels ";
        cin>>fuel;

        cout<<"Enter The Brand Of The Vehicels ";
        cin>>mbrand;

        cout<<endl;

        showroom[i]=new car(fuel,mbrand);
    }

    for(i=0;i<num;i++)
    {
        cout<<(i + 1)<< " ";
        showroom[i]->display();
    }

    delete[] showroom;


    return 0;
}
