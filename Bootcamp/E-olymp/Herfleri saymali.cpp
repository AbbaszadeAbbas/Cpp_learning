#include <bits/stdc++.h> 
using namespace std;
int main() {
    long long count = 0; string s; char ch;
    getline(cin, s);               cin>>ch;
    for(long long i = 0;i<s.size();i++){if(toupper(s[i]) == toupper(ch))count++;}
    cout<<count;
}