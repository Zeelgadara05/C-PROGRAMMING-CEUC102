#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include <iostream>

using namespace std;



class DynamicArray
{
    public:
        ~DynamicArray();

        DynamicArray();
        void insertdata(int value);
        void deletedata(int index);
        void display();

    protected:

    private:
        int* arr;
        int currentSize;
};

#endif // DYNAMICARRAY_H
