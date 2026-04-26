#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include<string>

using namespace std;

class BankAccount
{
    public:
        BankAccount(int accNum, string accName, double initialBalance);
        ~BankAccount();

        int getAccountNumber();
        string getAccountHolderName();
        double getBalance();
        static int getTotalAccounts();
        void deposit(double amount);
        bool withdraw(double amount);
        bool transferTo(BankAccount& recipient, double amount);
        void displayAccountSummary();

    protected:

    private:
        int accountNumber;
        string accountHolderName;
        double balance;
        static int totalAccounts;
};

#endif // BANKACCOUNT_H
