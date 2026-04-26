#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        void getdata();
        Complex operator + (Complex);
        Complex operator - (Complex);
        void display();

    protected:

    private:
        int num1,num2;
};

#endif // COMPLEX_H
