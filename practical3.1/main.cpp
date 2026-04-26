#include "Employee.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int salary,bn,tsalary,n,numEmployees,i;
    string nm;

    cout << "Enter the number of employees to process: ";
    cin >> numEmployees;

    Employee** payroll = new Employee*[numEmployees];

    for(i=0;i<numEmployees;i++)
    {
        cout<<"Enter the name of employee: ";
        cin >> ws;
        getline(cin, nm);
        cout<<"Enter the Basic Salary: ";
        cin>>salary;
        cout<<"Give a bonus to Employee (y=1/n=0)";
        cin>>n;

        if(n==1)
        {
            cout<<"Enter the bonus amount: ";
            cin>>bn;
        }
        else
        {
            bn=1000;
        }
        payroll[i]=new Employee(nm, salary, bn);
    }

    for(i=0;i<numEmployees;i++)
    {
        payroll[i]->showdata();
    }

    for(int i = 0; i < numEmployees; i++)
    {
        delete payroll[i];
    }
    delete[] payroll;
}
