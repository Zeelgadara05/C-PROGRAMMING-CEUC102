#include "ArraySum.h"
#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    if(n<=0)
    {
        cout<<"Array size must be greater than 0."<<endl;
        return 1;
    }

    ArraySum arrayProcessor(n);

    cout<<"Enter "<<n<<"integers: ";
    arrayProcessor.inputElements();

    auto startIterative = high_resolution_clock::now();
    long long sumIterative = arrayProcessor.iterativeSum();
    auto stopIterative = high_resolution_clock::now();
    auto durationIterative = duration_cast<nanoseconds>(stopIterative - startIterative);

    auto startRecursive = high_resolution_clock::now();

    long long sumRecursive = arrayProcessor.recursiveSum(arrayProcessor.getSize() - 1);
    auto stopRecursive = high_resolution_clock::now();
    auto durationRecursive = duration_cast<nanoseconds>(stopRecursive - startRecursive);

    cout<<"ITERATIVE SUM: "<<sumIterative<<endl;
    cout<<"Execution Time: "<<durationIterative.count()<<" nanoseconds\n"<<endl;

    cout<<"RECURSIVE SUM: "<<sumRecursive<<endl;
    cout<<"Execution Time: "<<durationRecursive.count()<<" nanoseconds\n"<<endl;

    cout<<"=========================================" << endl;

    return 0;
}
