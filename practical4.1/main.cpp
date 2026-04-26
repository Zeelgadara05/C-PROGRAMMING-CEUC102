#include "DynamicArray.h"
#include <iostream>

using namespace std;

int main()
{
    DynamicArray D;
    int choice,value,index;

    cout<<"CUSTOM DYNAMIC ARRAY MANAGER\n";

    do
    {
        cout<<"\nMenu Options:\n";
        cout<<"1. Insert element\n";
        cout<<"2. Delete element\n";
        cout<<"3. Display array contents\n";
        cout<<"4. Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter an integer to insert: ";
                cin>>value;

                D.insertdata(value);
                cout << "Element inserted.\n";
                break;

            case 2:
                cout<<"Enter the index to delete (starting at 0): ";
                cin >> index;

                D.deletedata(index);
                break;

            case 3:
                D.display();
                break;

            case 4:
                cout<<"Exiting program.\n";
                break;

            default:
                cout<<"Invalid choice..\n";
        }
    }
    while (choice != 4);

    return 0;
}
