#include <iostream>

class A{
public:
    A(int x)
    {
        _x = x;
    }
    ~A()
    {
        std::cout <<_x << std::endl;
    }
private:
    int  _x;
}; 


int main()
{
    A a(1);
    A b(2);

    return 0;
}