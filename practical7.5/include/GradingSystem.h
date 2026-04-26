#ifndef GRADINGSYSTEM_H
#define GRADINGSYSTEM_H
#include <string>

using namespace std;

class GradingSystem
{
    private:
        string studentName;
        double marks;

    public:
        GradingSystem(string , double);
        virtual ~GradingSystem() {}

        virtual char computeGrade()= 0;
        virtual void display();

    protected:
        double getMarks();
};

class Undergraduate : public GradingSystem
{
    public:
        Undergraduate(string , double);
        char computeGrade()override;
        void display() override;
};

class Postgraduate : public GradingSystem
{
    public:
        Postgraduate(string, double);
        char computeGrade() override;
        void display() override;
};

#endif
