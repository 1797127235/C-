#include <iostream>
using namespace std;

class Animal {
public:
    virtual Animal* clone() {
        cout << "Animal clone" << endl;
        return new Animal(*this);
    }
};

class Dog : public Animal {
public:
    Dog* clone() override { //  协变返回类型
        cout << "Dog clone" << endl;
        return new Dog(*this);
    }
};

int main() {
    Animal* a = new Dog();
    Animal* b = a->clone();  // 实际调用 Dog::clone()
    delete a;
    delete b;
}
