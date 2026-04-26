#include "BankAccount.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int numAccounts;
    cout<<"Enter the number of bank accounts to initialize: ";
    cin>>numAccounts;

    if (numAccounts <= 0)
    {
        cout << "Invalid number of accounts.\n";
        return 1;
    }

    BankAccount** bankDatabase = new BankAccount*[numAccounts];

    for (int i = 0; i < numAccounts; ++i)
    {
        int accNum;
        string accName;
        double initialBalance;

        cout << "\n Enter Details for Account " << i + 1 << "\n";
        cout << "Account Number: ";
        cin >> accNum;
        cout << "Account Holder Name: ";
        cin >> ws;
        getline(cin, accName);
        cout << "Initial Balance: $";
        cin >> initialBalance;

        bankDatabase[i] = new BankAccount(accNum, accName, initialBalance);
    }

    cout << "\nTotal active accounts in system: " << BankAccount::getTotalAccounts() << "\n";

    if (numAccounts >= 2)
    {
        cout << "\n Secure Transfer Test \n";
        double transferAmount;
        cout << "Enter amount to transfer from Account 1 to Account 2: $";
        cin >> transferAmount;

        if (bankDatabase[0]->transferTo(*bankDatabase[1], transferAmount))
        {
            cout << "Transfer processed successfully!\n";
        }
    }

    cout << "       FINAL ACCOUNT SUMMARIES       \n";

    for (int i = 0; i < numAccounts; ++i)
    {
        bankDatabase[i]->displayAccountSummary();
    }

    for (int i = 0; i < numAccounts; ++i)
    {
        delete bankDatabase[i];
    }

    delete[] bankDatabase;

    return 0;
}
