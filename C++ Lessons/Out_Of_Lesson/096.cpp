#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long a,b,c,n;
    cin>>n; 
    a=n/100; 
    b=n/10%10; 
    c=n%10; 
    if(a!=b and b!=c and a!=c) cout<<"YES"; 
    else cout<<"NO"; 
}