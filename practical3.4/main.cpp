#include "Templates.h"
#include <iostream>
#include<string>

using namespace std;

int main()
{
    int intArr[]={15, 82, 34, 9, 67};
    int intSize=sizeof(intArr)/sizeof(intArr[0]);

    double doubleArr[]={3.14, 9.81, 2.71, 1.61};
    int doubleSize=sizeof(doubleArr)/sizeof(doubleArr[0]);

    char charArr[]={'S', 'M', 'A', 'R', 'T'};
    int charSize=sizeof(charArr)/sizeof(charArr[0]);

    cout<<"TEMPLATE ARRAY OPERATIONS\n";

    cout<<"\n INTEGER ARRAY\n";
    cout<<"Original:  ";
    display(intArr, intSize);

    cout<<"Max Value: "<<Max(intArr, intSize)<<"\n";

    Reverse(intArr, intSize);
    cout << "Reversed:  ";
    display(intArr, intSize);

    cout << "\n CHARACTER ARRAY \n";
    cout << "Original:  ";
    display(charArr, charSize);

    cout<<"Max Value: "<<Max(charArr, charSize)<<"\n";

    Reverse(charArr, charSize);
    cout << "Reversed:  ";
    display(charArr, charSize);

    cout << "\n FLOATING-POINT ARRAY \n";
    cout << "Original:  ";
    display(doubleArr, doubleSize);

    cout<<"Max Value: "<<Max(doubleArr, doubleSize)<<"\n";

    Reverse(doubleArr, doubleSize);
    cout << "Reversed:  ";
    display(doubleArr, doubleSize);

    return 0;
}
