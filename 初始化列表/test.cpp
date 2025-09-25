#include <iostream>

using namespace std;

class A{
    int _a1;
    int _a2;
    int _a3;
    static int n;
public:
    A(int a3, int a2, int a1) :
      _a1(a1), _a2(a2), _a3(a3) 
    {
       n++;
    }
    static int getN()
    {
        return n;
    }
};

int A::n = 0;

int main()
{
    A a(1, 2, 3);
    cout << A::getN() << endl;
}