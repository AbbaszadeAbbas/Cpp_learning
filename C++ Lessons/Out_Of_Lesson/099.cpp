#include <bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n,m,l;
    cin>>n;
    for (l = 1; l < 1000000000000; l++){ 
        m = pow(2,l); 
        if (m > n){ 
            cout<<m; 
            break;
        } 
    } 
}