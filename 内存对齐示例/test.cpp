#include<iostream>

//class A {
//public:
//	char c;
//	int x;
//};

class A {
public:
	int x;
	char c;
};

class B {
public:
	char c1;
	double d;
	char c2;
	int x;
};

int main()
{
	//A a;
	//a.x = 1;
	//a.c = 'a';

	B b;
	b.c1 = 'a';
	b.d = 3.14;
	b.c2 = 'b';
	b.x = 2;

	std::cout << sizeof(b) << std::endl;
}