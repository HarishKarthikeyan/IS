#include <cmath>
#include <iostream>

using namespace std;

long long int power(long long int a, long long int b,
					long long int P)
{
	if (b == 1)
		return a;

	else
		return (((long long int)pow(a, b)) % P);
}

int main()
{
	long long int P, G, x, a, y, b, ka, kb;

	P = 23; 
	cout << "The value of P : " << P << endl;

	G = 21;  
	cout << "The value of G : " << G << endl;

	a = 4; 
	cout << "The private key a for Person1 : " << a << endl;

	x = power(G, a, P); 

	b = 3; 
	cout << "The private key b for Person2 : " << b << endl;

	y = power(G, b, P); 

	ka = power(y, a, P); 
	kb = power(x, b, P); 
	cout << "Secret key for the Person1 is : " << ka << endl;

	cout << "Secret key for the Person2 is : " << kb << endl;

	return 0;
}
