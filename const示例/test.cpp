#include <iostream>
#include <typeinfo>
#include <cxxabi.h>
#include <memory>
using namespace std;

template<typename T>
void print_type(const T& obj) {
    int status;
    // abi::__cxa_demangle 会把内部名解码成人类可读的名字
    char* demangled = abi::__cxa_demangle(typeid(obj).name(), nullptr, nullptr, &status);
    if (status == 0 && demangled) {
        cout << demangled << endl;
        free(demangled);
    } else {
        cout << typeid(obj).name() << endl; // fallback
    }
}

class A {
    int a = 0;
public:
    void print() const {
        cout << "a = " << a << endl;
    }
};

int main() {
    const A a;
    print_type(&a);   // 输出 "A"
    return 0;
}
