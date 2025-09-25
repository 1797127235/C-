#include <iostream>

class A{
public:
    A(int x)
    {
        _x = x;
        std::cout << "A(int x)" << std::endl;
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
    const A& A1 = 2;
    return 0;
}