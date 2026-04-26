#ifndef  POINT_H
#define  POINT_H


class point
{
    public:
        class point();




        point (x=0,y=0);
        point* move(int dx,int dy);
        void display();
        void updatepoint(point* p , int dx , int dy);

    protected:

    private:
        int x,y;
};

#endif //  POINT_H
