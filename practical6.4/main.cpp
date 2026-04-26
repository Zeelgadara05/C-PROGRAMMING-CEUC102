#include "account.h"
#include <iostream>

using namespace std;

int main()
{
    int choice,accno,bal,acc_choice,amount,withdraw;

    saving_account s(1,5000,5);
    curr_account c(2,2000,200);

    cout<<"\n1.Saving Account \n2.Current Acount";
    cout<<"Select Account ";
    cin>>acc_choice;

    account* activeacc = nullptr;

    if(acc_choice==1)
    {
        activeacc=&s;
    }
    else
    {
        activeacc=&c;
    }

    m:cout<<"\n1.Deposite Money \n2.Withdraw Money \n3.check Balance \n4.Exits ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Enter amount to deposit: ";
            cin>>amount;
            activeacc->deposite(amount);
            goto m;

        case 2:
            cout<<"Enter amount to Withdraw: ";
            cin>>amount;
            activeacc->withdraw(amount);
            goto m;

        case 3:
            activeacc->display();
            goto m;

        case 4:
            cout<<"Thnak You Visiting ";
            break;

        default:
            cout<<"Invalid Choice ";

    }
    return 0;
}
