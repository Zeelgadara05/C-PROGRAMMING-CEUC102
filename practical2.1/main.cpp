#include "rect_system.h"
#include <iostream>

using namespace std;

int main()
{
    rect_system rect[10];
    int n,i,last=0,index;
    float ar[10],pm[10];

    m:cout<<"\n1.Enter The Dimention \n2.Calculate The Area And Perimeter \n3.Update The Dimention \n4.Exit"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>n;
    cout<<endl;

    switch(n)
    {
        case 1:
            rect[last].enter_dimention();
            last++;
            goto m;

        case 2:
            if(last>0)
            {
                for(i=0;i<last;i++)
                {
                    ar[i]=rect[i].area_of_rect();
                    pm[i]=rect[i].perimeter_of_rect();
                }

                for(i=0;i<last;i++)
                {
                    cout<<"Area Of Rectangle is: "<<ar[i]<<endl;
                    cout<<"Perimeter Of Rectangle is: "<<pm[i]<<endl;
                    cout<<endl;
                }
            }
            else
            {
                cout<<"Please Enter The Dimention"<<endl;
            }
            goto m;

        case 3:
            if(last>0)
            {
                cout<<"Enter The Index";
                cin>>index;

                if(index>=0 && index<last)
                {
                    rect[index].enter_dimention();
                    cout<<"Dimention Updated"<<endl;
                }
                else
                {
                    cout<<"Enter Valid Index"<<endl;
                }
            }
            else
            {
                cout<<"Please Enter The Dimention"<<endl;
            }
            goto m;

        case 4:
            break;

        default:
            cout<<"\nPlease Enter Valid Choice"<<endl;
            goto m;
    }
}
