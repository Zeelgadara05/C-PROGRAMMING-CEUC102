#ifndef SUPERDIGIT_H
#define SUPERDIGIT_H
#include <iostream>
#include<string>

using namespace std;

class SuperDigit
{
    public:
        int findSuperDigit(string& n, int k);

    protected:

    private:
        long initialSum=0;
        long currentSum=0;

        int calculateRecursive(long num);
};

#endif // SUPERDIGIT_H
