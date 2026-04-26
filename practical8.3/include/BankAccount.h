#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

using namespace std;

class BankAccount {
private:
    double balance;
    string logs[100];
    int logCount;

public:
    BankAccount(double initialBalance);
    void addLog(const string& message);
    void deposit(double amount);
    void withdraw(double amount);
    void processTransaction(double amount);
    void printLogs() const;
    double getBalance() const;
};

class CallTracker {
private:
    BankAccount* acc;
    string funcName;

public:
    CallTracker(BankAccount* account, const string& name);
    ~CallTracker();
};

class InsufficientFundsException {
public:
    string message;
    InsufficientFundsException(const string& msg);
};

class InvalidAmountException {
public:
    string message;
    InvalidAmountException(const string& msg);
};

#endif
