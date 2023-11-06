#include <bits/stdc++.h>
using namespace std;

class Base{
public:
	 virtual void display(){
		cout << "Base display" << endl;
	}

	void show(){
		cout << "base show" <<endl;
	}
};

class Derived: public Base{
public:
	void display(){
		cout << "D display" << endl;
	}

	void show(){
		cout << "D show" <<endl;
	}

};



class Derived1: public Derived{
public:
	void display(){
		cout << "D1 display" << endl;
	}

	void show(){
		cout << "D1 show" <<endl;
	}

};
int main(){	
	
	Base * b = new Derived();
	b->display();

	return 0;
}