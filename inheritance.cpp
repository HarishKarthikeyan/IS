#include <iostream>
using namespace std;

class A{
public:
	void func(){
		cout << "class a" << endl;
	}
};

class B:public A{
public:
	void func(){
		cout << "class b" << endl;
	}
};

class C:public B{
public:
	void func(){
		cout << "class c" << endl;
	}
};

int main(){
	B obj ;
	obj.func();

	A obj1;
	obj1.func();


	return 0;
}