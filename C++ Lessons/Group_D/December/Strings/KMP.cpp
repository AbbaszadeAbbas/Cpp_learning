#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin,a);
    string s;
    cin>>s;
    for(long long i = 0;i<a.size();i++){
        long long say = 0;
        for(long long j = i;j<i+s.size();j++){
            if(a[j] == s[j-i]){
                say++;
            }
        }
        if(say == s.size()){
            cout<<i<<" ";
        }
        say = 0;
    }
}