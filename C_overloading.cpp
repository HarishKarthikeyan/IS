#include <bits/stdc++.h>
using namespace std;

class S{
private:
	int area;
public:
	S(){
		cout << "Constructor called" << endl;;
	}
	S(int x, int y){
		area=x*y;
		cout << area << endl;
	}

	void print(){
		cout << area << endl;
	}

};
int main(){
	S *s1 = new S();
	s1->print();
	S *s2 = new S(5,5);
	s2->print();
	return 0;

	S s1(2,3);
	// S *s2 = new S();

	return 0;
}