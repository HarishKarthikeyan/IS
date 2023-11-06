#include <iostream>
using namespace std;

class Base{
public:	
	virtual void func()=0;

	void func2(){
		cout << "func base " << endl;
	}
};

class D: public Base{
public:
	// void func(){
	// 	cout << "derived class" << endl;
	// }
	void func2(){
		cout << "func base " << endl;
	}
};
class derived: public D{
public:
	void func(){
		cout << "d output class" << endl;
	}
	void func2(){
		cout << "func base " << endl;
	}
};



int main(){
	derived d1;;
	d1.func();
	return 0;
}