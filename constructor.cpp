#include <bits/stdc++.h>
using namespace std;

class NewClass{
private:
	int a;
	int b;

public:
	NewClass(int x, int y){
		cout << "Constructor called" << endl;
		a=x+3;
		b=y+3;
		// cout << a << " " << b << endl;

	}
	NewClass(NewClass& z){
		cout << "CC called" << endl;
		a=z.a+7;
		b=z.b+7;
	}

	void print(){
		cout << a << b << endl;
	}
};
int main(){
	
	NewClass n(10,29);
	NewClass n1=n;
	n1.print();

	


	return 0;
}