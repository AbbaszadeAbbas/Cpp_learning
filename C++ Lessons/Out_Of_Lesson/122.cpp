#include <bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n,m;
    cin>>n;
    n=abs(n);
    m=0;
    if(n==0){m=1;}
    while (n>0){
        n/=10;
        m++;
    }
    cout<<m;
}