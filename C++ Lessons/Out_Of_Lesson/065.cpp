#include <bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n,m; 
    cin>>n>>m; 
    n=abs(n); 
    m=abs(m); 
    if((n%2==0 && m%2==0) || (n%2==1 && m%2==1)){ 
        cout<<1; 
    } else{ 
        cout<<0;
    } 
}