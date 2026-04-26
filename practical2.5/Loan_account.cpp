#include "Loan_account.h"
#include<iostream>
#include<cmath>


int Loan_account::cid = 1;

Loan_account::Loan_account()
{
    //ctor
    id=cid++;
    rate=2.5;
}

Loan_account::Loan_account(string x, double a, int m)
{
    id=cid++;
    rate=2.5;
    name=x;
    amount=a;
    tenure=m;
}

void Loan_account::insert_data()
{
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<"Enter Amount: ";
    cin>>amount;
    cout<<"Enter Tenure: ";
    cin>>tenure;
}

void Loan_account::display_data()
{
    cout<<"Account Holder Name: "<<name<<endl;
    cout<<"Account ID: "<<id<<endl;
    cout<<"Amount: "<<amount<<endl;
    cout<<"Rate: "<<rate<<endl;
    cout<<"Tenure: "<<tenure<<endl;

    emi_calc();
}

void Loan_account::emi_calc()
{
    emi=(amount*rate*pow((1+rate),tenure))/pow((1+rate),tenure)-1;

    cout<<"EMI: "<<emi;
}


