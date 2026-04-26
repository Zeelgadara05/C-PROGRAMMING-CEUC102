#ifndef SHAPE_H
#define SHAPE_H



class Shape
{
    public:
        Shape(int);
        ~Shape();
        void inputdata();

    protected:
        int* radius;
        int sized;

    private:

};

class circle : public Shape
{
    float* area;

    public:
        circle(int);
        ~circle();
        void calculatearea();
        void getarea();
};


#endif // SHAPE_H
