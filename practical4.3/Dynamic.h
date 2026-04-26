#ifndef DYNAMIC_H
#define DYNAMIC_H


class Dynamic
{
    public:
        Dynamic(int, int);
        ~Dynamic();

        void inputdata();
        void mergedata();
        void display();

    protected:

    private:
        int* ar1;
        int* ar2;
        int* merged;
        int size1;
        int size2;
        int mergedsize;
};

#endif // DYNAMIC_H
