#include <bits/stdc++.h>
using namespace std;
int main() { 
    long long n,n1,b; 
    cin>>n; 
    int cem=0,say=0;
    while(n>0){ 
        n1=n%10; 
        if(n1%2==0){ 
            cem+=n1; 
            say++; 
        } 
        n/=10; 
    } 
    if(say==0){ 
        cout<<-1; 
    } else cout<<cem;
}