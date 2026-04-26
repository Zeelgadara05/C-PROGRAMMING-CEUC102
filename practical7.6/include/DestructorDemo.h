#ifndef DESTRUCTORDEMO_H
#define DESTRUCTORDEMO_H

class BadBase
{
    public:
        BadBase();
        ~BadBase();
};

class BadDerived : public BadBase
{
    private:
        int* rawPointerData;

    public:
        BadDerived();
        ~BadDerived();
};

class GoodBase
{
    public:
        GoodBase();
        virtual ~GoodBase();
};

class GoodDerived : public GoodBase
{
    private:
        int* rawPointerData;

    public:
        GoodDerived();
        ~GoodDerived();
};

#endif
