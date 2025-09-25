#include<iostream>
using namespace std;

class Base
{
public:
    virtual void func1()
    {
        ;
    }
    int _a;
};

int main()
{
    Base b;
    cout << sizeof(b) << endl;
    return 0;
}
