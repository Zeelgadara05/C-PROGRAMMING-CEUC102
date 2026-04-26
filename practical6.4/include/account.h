#ifndef ACCOUNT_H
#define ACCOUNT_H


class account
{
    public:
        account(int,int);
        virtual void deposite(int);
        virtual void withdraw(int);
        virtual void display();

    protected:
        int d_amount;
        int w_amount;
        int acc_number;
        int cur_balance;

    private:
};

class saving_account : public account
{
    float rate;

    public:
        saving_account(int,int, float);
        void display();
};

class curr_account : public account
{
    int draft_limit;

    public:
        curr_account(int,int,int);
        void withdraw(int);
        void display();
};


#endif // ACCOUNT_H
