#include <bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n,m; 
    cin>>n>>m;
    if((n>0 && m>0) || (n<0 && m<0)){ 
        cout<<1; 
    } else{ 
        cout<<0;
    } 
}