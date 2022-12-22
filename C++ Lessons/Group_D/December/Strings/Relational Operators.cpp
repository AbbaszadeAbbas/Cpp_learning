#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,count = 1;
    string s;
    while(cin>>a>>s>>b){
        if(s == "E"){
            return 0;
        }
        if(a == b){
            if(s == "==" or s == "<=" or s == ">="){
                cout<<"Case "<<count<<": true\n";
                count++;
            }else {
                cout<<"Case "<<count<<": false\n";
                count++;
            }
        }
        if(a > b){
            if(s == "!=" or s == ">=" or s == ">"){
                cout<<"Case "<<count<<": true\n";
                count++;
            }else {
                cout<<"Case "<<count<<": false\n";
                count++;
            }
        }
        if(a < b){
            if(s == "!=" or s == "<=" or s == "<"){
                cout<<"Case "<<count<<": true\n";
                count++;
            }else {
                cout<<"Case "<<count<<": false\n";
                count++;
            }
        }
    }
}