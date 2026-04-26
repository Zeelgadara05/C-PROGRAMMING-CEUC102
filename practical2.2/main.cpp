#include "student.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    student s[100];
    int ch,last=0,id,i;

    cout<<"Welcome TO System: "<<endl;
    m:cout<<"\n1.Enter The Student Details \n2.Get Student Result \n3.Exist"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>ch;
    cout<<endl;

    switch(ch)
    {
        case 1:
            s[last].get_stu_details();
            last++;
            goto m;

        case 2:
            if(last>0)
            {
                cout<<"Enter The Student ID: ";
                cin>>id;

                for(i=0;i<last;i++)
                {
                    if(s[i].calc_avg(id)==1)
                    {
                        break;
                    }
                }
                if(i==last)
                {
                    cout<<"Invalid id"<<endl;
                }
            }
            else
            {
                cout<<"Plese Enter The Student Details"<<endl;
            }
            goto m;

        case 3:
            break;

        default:
            cout<<"Please Enter The Valid Choice";
    }
    return 0;
}
