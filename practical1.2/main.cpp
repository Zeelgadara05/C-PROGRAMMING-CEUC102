#include "library_system.h"
#include <iostream>

using namespace std;

int main()
{
    library_system l[100];
    int n,last=0,i;
    string tt_name;

    m: cout<<"\n1.Adding new books to the library \n2.Issuing a book to a student \n3.Returning issued books \n4.Displaying total books in the library \n5.Exit"<<endl<<endl;
    cout<<"Enter your Choice: ";
    cin>>n;

    switch(n)
    {
        case 1:
            l[last].add_new_book();
            last++;
            goto m;

        case 2:
            cout<<"Enter Book Title: ";
            cin>>tt_name;
            for(i=0;i<last;i++)
            {
                if(l[i].issue_book(tt_name)==1)
                {
                    break;
                }
                else
                {
                    cout<<"Invalid Book Title"<<endl;
                }
                if(i==last)
                {
                    cout<<"Book Does't Exits"<<endl;
                }
            }
            goto m;

        case 3:
            cout<<"Enter Book Title: ";
            cin>>tt_name;
            for(i=0;i<last;i++)
            {
                if(l[i].return_book(tt_name)==1)
                {
                    break;
                }
                else
                {
                    cout<<"Invalid Book Title"<<endl;
                }
                if(i==last)
                {
                    cout<<"Book Does't Exits"<<endl;
                }
            }
            goto m;

        case 4:
            for(i=0;i<last;i++)
            {
                l[i].display_book(last);
            }
            goto m;

        case 5:
            goto n;

        default:
            cout << "ERROR: Invalid choise";
            goto m;

        n:return 0;
    }

}
