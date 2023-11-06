#include <iostream>
using namespace std;

void fact(int n){
	int fac=1;
	int x=2;
	while(fac<=n){
		cout << fac << " ";
		fac=fac*x;
		x++;
	}
}
int main(){
	int a;
	cin >> a;
	fact(a);
	return 0;
}