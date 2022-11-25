#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n; 
    cin>>n; 
    n=abs(n); 
    if(n%6==0 and n>9 and n<100) cout<<"YES"; 
    else cout<<"NO";
}