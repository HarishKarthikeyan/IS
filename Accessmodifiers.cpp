#include <bits/stdc++.h>
using namespace std;

class Student{
private:
	int id;
	string name;
public:
	void func(){
		id=10;
		cout << id << endl;
	}
	void func1(){
		name = "Harish";
		cout << name << endl;
	}

	void setid(int n){
		id=n;
	}

	int getid(){
		return id;
	}

};

int main(){

	// Student s;
	// s.func();


	Student s1; 
	s1.setid(53);
	cout << s1.getid() << endl;

	return 0;
}