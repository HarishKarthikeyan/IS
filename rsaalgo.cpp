#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Implementation of RSA Algorithm \n";
    cout << "Enter two prime numbers\n";
    double num1, num2;
    cin >> num1 >> num2;
    double n = num1 * num2;
    double track;
    double phi = (num1 - 1) * (num2 - 1);
    double e = 7;
    while (e < phi)
    {
        track = __gcd((int)e, (int)phi);
        if (track == 1)
            break;
        else
            e++;
    }
    double d1 = 1 / e;
    double d = fmod(d1, phi);
    double message;

    cout << "Enter message\n";
    cin >> message;
    double c = pow(message, e);
    double m = pow(c, d);
    c = fmod(c, n);
    m = fmod(m, n);
    
    cout << "Original Message = " << message << endl;
    cout << "p = " << num1 << endl;
    cout << "q = " << num2 << endl;
    cout << "n = pq = " << n << endl;
    cout << "phi = " << phi << endl;
    cout << "e = " << e << endl;
    cout << "d = " << d << endl;
    cout << "Encrypted message = " << c << endl;
    cout << "Decrypted message = " << m << endl;
    return 0;
}