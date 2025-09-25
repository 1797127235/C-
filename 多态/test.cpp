#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {   // 虚函数
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    virtual void speak() {  
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    virtual void speak(){
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* p1 = new Dog();
    Animal* p2 = new Cat();

    p1->speak(); // 输出 "Woof!"
    p2->speak(); // 输出 "Meow!"

    delete p1;
    delete p2;
}
