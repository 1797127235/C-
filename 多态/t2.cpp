#include<iostream>
using namespace std;
typedef void(*VFPTR)();

class Base
{
public:
    virtual void func1()
    {
        ;
    }
    virtual void func2()
    {
        ;
    }
};


class Driver : public Base
{
public:
    virtual void func2()
    {
        ;
    }
    virtual void func3()
    {
        ;
    }
    virtual void func4()
    {
        ;
    }
};

void Print(VFPTR* ptr)
{
    for(int i = 0; i < 4; i++)
    {
        printf("%p\n",ptr[i]);
    }
}

int main()
{
    Base b;
    Driver d;
    VFPTR* ptr = (VFPTR*)*(int*)&d;
    Print(ptr);
    return 0;
}
