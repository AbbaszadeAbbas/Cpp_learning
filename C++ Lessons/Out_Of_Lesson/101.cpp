#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long t,k=0,n; 
    cin>>n; 
    while(n>0){ 
        n/=10; 
        k++;
    } 
    t=pow(10,k); 
    cout<<t; 
}