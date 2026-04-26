#ifndef LOAN_ACCOUNT_H
#define LOAN_ACCOUNT_H
#include<iostream>
#include <string>

using namespace std;


class Loan_account
{
    public:
        Loan_account();
        Loan_account(string, double, int);

        void display_data();
        void insert_data();

    private:
        int id;
        string name;
        float rate;
        int tenure;
        double amount;
        float emi;
        static int cid;

        void emi_calc();
};


#endif // LOAN_ACCOUNT_H
