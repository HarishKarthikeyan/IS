#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Caesar Cipher program for encryption : " << endl;
    string s, t;
    int key;
    cout << "Enter the message : ";
    getline(cin, s);

    cout << "Enter the key : ";
    cin >> key;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' '){
            char originalChar = s[i];
            t += (((originalChar + key) + 128) % 128);
        }
        else
            t += " ";
    }
    cout << "\n\nEncrypted message is " << t <<" and size "<<t.size() <<'\n';
    return 0;
}
