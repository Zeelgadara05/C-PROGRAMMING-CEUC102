#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include<string>

using namespace std;


class Employee
{
    public:
        Employee(string, int, int);

        inline int totalsalary()
        {
            total=bsalary+bonus;
            return total;
        }

        void showdata();

    protected:

    private:
        string name;
        int bsalary,total;
        int bonus;
};

#endif // EMPLOYEE_H
