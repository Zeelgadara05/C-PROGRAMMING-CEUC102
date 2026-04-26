#include "account.h"
#include <iostream>

using namespace std;

account::account(int x, int y)
{
     acc_number=x;
     cur_balance=y;
}

void account :: deposite(int x)
{
    d_amount=x;
    if(d_amount>0)
    {
        cur_balance+=d_amount;
    }
    else
    {
        cout<<"Plase Enter The Valid Amount ";
    }
}

void account :: withdraw(int y)
{
    w_amount=y;
    if(w_amount<cur_balance)
    {
        cur_balance-=w_amount;
    }
    else
    {
        cout<<"Insufiat Balance ";
    }
}

void account :: display()
{
    cout<<"Acccount Number "<<acc_number<<endl;
    cout<<"Current Balance "<<cur_balance<<endl;
}

saving_account::saving_account(int x, int y, float z):account(x,y)
{
    rate=z;
}

void saving_account :: display()
{
    cout<<"Acccount Number "<<acc_number<<endl;
    cout<<"Current Balance "<<cur_balance<<endl;
    cout<<"Interest Rate "<<rate<<endl;
}

curr_account::curr_account(int x, int y, int z):account(x,y)
{
    draft_limit=z;
}

void curr_account :: withdraw(int y)
{
    w_amount=y;
    if(w_amount<cur_balance && (cur_balance-w_amount)>=draft_limit)
    {
        cur_balance-=w_amount;
    }
    else
    {
        cout<<"Insufiat Balance ";
    }
}

void curr_account :: display()
{
    cout<<"Acccount Number "<<acc_number<<endl;
    cout<<"Current Balance "<<cur_balance<<endl;
    cout<<"Overdraft Limit "<<draft_limit<<endl;
}
