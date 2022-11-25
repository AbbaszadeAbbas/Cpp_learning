#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n; 
    cin>>n; 
    if((n%2==0 and n>0) or (n<0 and n%2!=0)) cout<<"NO"; 
    else cout<<"YES"; 
}