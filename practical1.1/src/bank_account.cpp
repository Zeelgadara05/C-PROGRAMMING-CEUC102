#include "bank_account.h"
#include<iostream>

void bank_account :: createaccount()
{
    cout << "Enter Account number ->";
    cin >> account_num;
    cout << "Enter Holder name ->";
    cin >> holder;
    cout << "Enter Balance ->";
    cin >> balance;
}

int bank_account :: withdrawmoney(long int x)
{
    int amt;
    if(account_num == x)
    {

        cout << "ENter amount to be withdrwan ->";
        cin >> amt;

        if(balance >= amt)
        {
            balance = balance - amt;
        }
        else
        {
            cout << "ERROR: Insufficient bank balance";
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

int bank_account :: depositemoney(long int x)
{
    int amt;
    if(account_num == x)
    {

        cout << "ENter amount to be withdrwan ->";
        cin >> amt;
            balance = balance + amt;
        return 1;
    }
    else
    {
        return 0;
    }
}
int bank_account :: checkbalance(long int x)
{
    if(account_num == x)
    {
        cout << "Balance -> " << balance<<endl;
        return 1;
    }
    else
    {
        return 0;
    }
}
