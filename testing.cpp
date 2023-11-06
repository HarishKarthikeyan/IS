#include <iostream>
using namespace std;

int main()
{
	int a = 539;

	int rev=0; int num;

	while(a!=0){
		num = a%10;

		rev = rev*10 + num;

		a= a/10;
	}
	cout << rev;
	return 0;
}