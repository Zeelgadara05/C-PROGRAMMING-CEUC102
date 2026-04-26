#ifndef RECT_SYSTEM_H
#define RECT_SYSTEM_H
#include <iostream>

using namespace std;


class rect_system
{
    public:

        void enter_dimention();
        float area_of_rect();
        float perimeter_of_rect();

    protected:

    private:
        float length;
        float width;
        float area;
        float perimeter;
};

#endif // RECT_SYSTEM_H
