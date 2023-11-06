#include <bits/stdc++.h>
using namespace std; 


int main(){ 

    cout<<"Caesar Cipher program \n\n"; 
    string s = "Password<>!@";
    int key=2; 
    string t; 

    cout<<"Key: " << key << endl; 
    cout<<"Message:" << s << endl; 
    
    for(int i=0;i<s.size();i++){ 
        t+=(s[i]-'A'+key)%26+'A'; 
    } 

    cout<<"\nEncrypted message is :"<<t<<'\n'; 
    return 0; 
 
} 
