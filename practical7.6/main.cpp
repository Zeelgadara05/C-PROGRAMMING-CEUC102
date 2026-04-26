#include "DestructorDemo.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"======================================================\n";
    cout<<" PART 1: PARTIAL DESTRUCTION (MEMORY LEAK)\n";
    cout<<"======================================================\n";

    BadBase* badPtr = new BadDerived();

    cout<<"\n-> Deleting badPtr...\n";
    delete badPtr;

    cout<<"\nNotice above that the BadDerived destructor was NEVER called!\n";
    cout<<"The dynamically allocated 'rawPointerData' is now leaked in memory.\n\n";

    cout<<"======================================================\n";
    cout<<" PART 2: SAFE DESTRUCTION (VIRTUAL DESTRUCTOR)\n";
    cout<<"======================================================\n";

    GoodBase* goodPtr = new GoodDerived();

    cout<<"Deleting goodPtr...\n";
    delete goodPtr;

    cout<<"\n[SUCCESS]: Notice above that the GoodDerived destructor WAS called first!\n";
    cout<<"All dynamically allocated memory was safely released before the base was destroyed.\n";
    cout<<"======================================================\n";

    return 0;
}
