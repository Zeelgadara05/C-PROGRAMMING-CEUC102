#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <vector>
#define PI 3.14159265358979323846

using namespace std;


class Shape
{
    public:
        shape();
        virtual double Area() = 0;
        virtual void display() = 0;
        virtual ~Shape() {}

    protected:

    private:
        int n;
};

class Rectangle : public Shape
{
    public:
        Rectangle(double, double);
        double Area();
        void display();

    private:
        double length;
        double width;
};

class Circle : public Shape
{
    public:
        Circle(double);
        double Area();
        void display();

    private:
        double radius;
};

#endif // SHAPE_H
