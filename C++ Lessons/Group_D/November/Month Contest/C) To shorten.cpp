#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    for(long long i = 0;i<s.size();i++){
        if(s[i]>=65 and s[i]<=90){
            cout<<s[i];
        }
    }
}