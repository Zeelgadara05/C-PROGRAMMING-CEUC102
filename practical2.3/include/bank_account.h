#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include <iostream>
#include<string>

using namespace std;


class bank_account
{
    public:


        void createaccount();
        int withdrawmoney(long int);
        int depositemoney(long int);
        int checkbalance(long int);

    protected:

    private:
        long int account_num;
        string holder;
        long long balance;
};

#endif // BANK_ACCOUNT_H
