#include <bits/stdc++.h>
using namespace std;
int main ( ) {
    unsigned long long n,div=2;
    cin>>n;
    while(div*div<=n) {
        if(n%div==0) {
            cout<<div;
            n=n/div;
            cout<<"*";
        } else if(div==2) {
            div=3;
        } else { 
            div+=2; 
        } 
    } 
    cout<<n; 
}