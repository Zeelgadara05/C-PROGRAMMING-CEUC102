#include "Item.h"
#include <iostream>
#include<string>
#include <iomanip>

using namespace std;

int main()
{
   Item inventory[100];
    int itemCount=0,i,found=0;

    int choice;
    int searchID,qut;

    m:cout << "\n===================================";
    cout << "\n    INVENTORY MANAGEMENT SYSTEM    ";
    cout << "\n===================================";
    cout << "\n1. Add New Item";
    cout << "\n2. Restock Item (Add)";
    cout << "\n3. Sell Item (Subtract)";
    cout << "\n4. Display All Items";
    cout << "\n5. Exit";
    cout << "\n===================================";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            {
                if (itemCount>=100)
                {
                    cout<<"Error: Inventory is full!" << endl;
                    goto m;
                }

                int id,q;
                double p;
                string name;

                cout<<"Enter Item ID: ";
                cin>>id;
                cout<<"Enter Item Name: ";
                cin.ignore();
                getline(cin, name);
                cout<<"Enter Price: Rs";
                cin>>p;
                cout<<"Enter Initial Quantity: ";
                cin>>q;

                inventory[itemCount]=Item(id,name,p,q);
                itemCount++;

                cout<<"Item added successfully!"<<endl;
                goto m;
            }

        case 2:
            {
                cout<<"Enter Item ID to restock: ";
                cin>>searchID;

                for(i=0;i<itemCount;i++)
                {
                    if(inventory[i].getID()==searchID)
                    {
                        cout<<"Enter amount to add: ";
                        cin>>qut;
                        inventory[i].addStock(qut);
                        found=1;
                        break;
                    }
                }
                if (!found)
                {
                    cout<<"Error: Item ID not found."<<endl;
                }
                goto m;
            }

        case 3:
            {
                cout<<"Enter Item ID to sell: ";
                cin>>searchID;

                for(i=0;i<itemCount;i++)
                {
                    if(inventory[i].getID()==searchID)
                    {
                        cout<<"Enter amount to sell: ";
                        cin>>qut;
                        inventory[i].sellItem(qut);
                        found=1;
                        break;
                    }
                }
                if(!found)
                {
                    cout<<"Error: Item ID not found."<<endl;
                }
                goto m;
            }

        case 4:
            {
                if(itemCount==0)
                {
                    cout<<"Inventory is currently empty."<<endl;
                }
                else
                {
                    cout<<"\n------------------------------------------------\n";
                    cout<<left<<setw(10)<<"ID"<<setw(20)<<"Name"<<setw(10)<<"Price"<<"Quantity\n";
                    cout<<"------------------------------------------------\n";
                    for(i=0;i<itemCount;i++)
                    {
                        inventory[i].display();
                    }
                    cout<<"------------------------------------------------\n";
                }
                goto m;
            }

        case 5:
            {
                cout<<"Exiting system. Have a great day!"<<endl;
                break;
            }

        default:
            {
                cout<<"Invalid choice. Please try again."<<endl;
                goto m;
            }
    }
    return 0;
}
