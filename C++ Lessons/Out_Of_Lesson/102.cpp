#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long i,n; 
    cin>>n; 
    n++; 
    while(n%2==0 or n%5==0 or n%3==0) n++; cout<<n;
}