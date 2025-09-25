#include <iostream>

class A{
public:
    void print(){
        std::cout << this << std   ::endl;
        std::cout<<"print()"<<std::endl;
    }

    void show()
    {
        std::cout << this << std::endl;
        std::cout << _a << std::endl;
    }
private:
    int _a;
};

int main(){
    A* p = nullptr;
    p->print();  //没调用this指针，不会报错

    p->show(); //这里会报错，因为调用了this指针，访问了内部成岩
    (*p).print(); //等价于p->print()

    return 0;
}