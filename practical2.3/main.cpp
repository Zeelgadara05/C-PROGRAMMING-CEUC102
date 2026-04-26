#include "bank_account.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    bank_account B[50];
    int ch,last=0,i;
    long int acc_num;

   M: cout << "\n1 Create Account \n2.With Draw Money \n3.Deposite Money \n4.Check Balance \n5.Exit \n";
   cout << "Enter your choise ->";
    cin >> ch;

    switch(ch)
    {
    case 1:
        B[last].createaccount();
        last ++;
        goto M;

    case 2:
        cout << "Enter account number ->";
        cin >> acc_num;
        for (i = 0 ; i < last ; i++)
        {

            if(B[i].withdrawmoney(acc_num) == 1)
            {
                break;
            }
            if(i == last)
            {
                cout << "Account dose not exist";
            }
        }
        goto M;

    case 3:
        cout << "Enter account number ->";
        cin >> acc_num;
        for (i = 0 ; i < last ; i++)
        {

            if(B[i].depositemoney(acc_num) == 1)
            {
                break;
            }
            if(i == last)
            {
                cout << "Account dose not exist";
            }
        }
        goto M;
    case 4:
        cout << "Enter account number ->";
        cin >> acc_num;
        for (i = 0 ; i < last ; i++)
        {

            if(B[i].checkbalance(acc_num) == 1)
            {
                break;
            }
            if(i == last)
            {
                cout << "Account dose not exist";
            }
        }
        goto M;

    case 5:
        goto N;

    default:
        cout << "ERROR: Invalid choise";
        goto M;
    }


   N: return 0;
}
