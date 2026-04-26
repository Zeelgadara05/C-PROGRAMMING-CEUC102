#include "GradingSystem.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<GradingSystem*> records;
    int choice;
    string name;
    double marks;


    while (true)
    {
        cout<<"\n1. Add Undergraduate Student\n";
        cout<<"2. Add Postgraduate Student\n";
        cout<<"3. Display All Records\n";
        cout<<"4. Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        if (choice == 1 || choice == 2)
        {
            cout<<"Enter Student Name: ";
            cin>>ws;
            getline(cin, name);
            cout<<"Enter Marks: ";
            cin>>marks;

            if(choice == 1)
            {
                records.push_back(new Undergraduate(name, marks));
                cout << "Undergraduate record added.\n";
            }
            else
            {
                records.push_back(new Postgraduate(name, marks));
                cout << "Postgraduate record added.\n";
            }
        }
        else if (choice == 3)
        {
            if (records.empty())
            {
                cout<<"No records available.\n";
            }
            else
            {
                cout<<"\n--- Student Records ---\n";
                for(size_t i=0; i<records.size(); i++)
                {
                    records[i]->display();
                    cout << "-----------------------\n";
                }
            }
        }
        else if (choice == 4)
        {
            for(size_t i=0; i<records.size(); i++)
            {
                delete records[i];
            }
            records.clear();
            cout<<"Exiting system...\n";
            break;
            }
            else
            {
            cout << "Invalid choice.\n";
            }
        }
    return 0;
}
