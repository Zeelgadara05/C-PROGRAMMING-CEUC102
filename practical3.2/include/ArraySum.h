#ifndef ARRAYSUM_H
#define ARRAYSUM_H
#include <iostream>

using namespace std;

class ArraySum
{
    public:
        ArraySum(int s);
        ~ArraySum();

        void inputElements();;
        long long iterativeSum();;
        long long recursiveSum(int index);;
        int getSize();;

    protected:

    private:
        int *arr;
        int size;
};

#endif // ARRAYSUM_H
