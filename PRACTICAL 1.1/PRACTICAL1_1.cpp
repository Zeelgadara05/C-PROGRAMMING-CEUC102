#include<iostream>
using namespace std;
class bank_account
{
private :

        long int account_num;
        string holder;
        long long balance;

    public :
        void ca();
        int w(long int);
        int d(long int);
        int cb(long int);
};

void bank_account :: ca()
{
    cout << "Enter Account number ->";
    cin >> account_num;
    cout << "Enter Holder name ->";
    cin >> holder;
    cout << "Enter Balance ->";
    cin >> balance;
}

int bank_account :: w(long int x)
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

int bank_account :: d(long int x)
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
int bank_account :: cb(long int x)
{
    if(account_num == x)
    {
        cout << "Balance -> " << balance;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    bank_account B[50];
    int ch,last=0,i;
    long int acc_num;

   M: cout << "\n1.CA \n2.W \n3.D \n4.CB \n5.Exit\n";
   cout << "Enter your choise ->";
    cin >> ch;

    switch(ch)
    {
    case 1:
        B[last].ca();
        last ++;
        goto M;

    case 2:
        cout << "Enter account number ->";
        cin >> acc_num;
        for (i = 0 ; i < last ; i++)
        {

            if(B[i].w(acc_num) == 1)
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

            if(B[i].d(acc_num) == 1)
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

            if(B[i].cb(acc_num) == 1)
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
