#include <iostream>

using namespace std;

int main()
{
   point p(1,2);

   cout<<"initial point";
   p->display();

   p.move(2,3)->move(1,4);

    cout << "After Chaining: ";
    p.display();


    updatePoint(&p, 5, -2);

    cout << "After updatePoint(): ";
    p.display();

    return 0;
}
