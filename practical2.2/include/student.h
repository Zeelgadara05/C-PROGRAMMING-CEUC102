#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<string>

using namespace std;


class student
{
    public:


        void get_stu_details();
        int calc_avg(int);

    protected:

    private:
        string name;
        int ID;
        float m1;
        float m2;
        float m3;
        float avg;
};

#endif // STUDENT_H
