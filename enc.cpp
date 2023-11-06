#include <iostream>
using namespace std;

class Student{
	private:
		int id;
		string name;

	public:
		string getname(){
			return name;
		}
		void setname(string name1){
			name = name1;
		}

		int getid(){
			return id;
		}
		void setid(int i){
			id=i;
		}
};
int main(){
	Student s;
	// Student s1;
	s.setid(10);
	s.setname("Harish");
	cout << s.getid() <<" "<< s.getname() << endl;


	
	return 0;
}