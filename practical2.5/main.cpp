#include <iostream>
#include "Loan_account.h"

using namespace std;

int main()
{
   Loan_account l1;

   l1.insert_data();
   cout<<endl<<endl<<endl;
   l1.display_data();

   Loan_account l2("pratik",10000,10);
   cout<<endl<<endl<<endl;
   l2.display_data();
    return 0;
}
