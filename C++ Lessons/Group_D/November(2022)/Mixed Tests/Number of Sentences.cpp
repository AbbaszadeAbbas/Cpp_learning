#include <bits/stdc++.h>
using namespace std; 
int main() { 
    string s; 
    getline(cin,s); 
    int say=0; 
    for(int i=0;i<s.size();i++){ 
        if(isupper(s[i])){ 
            say++; 
        }
    }
    cout<<say;
}