#include <bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n,l;
    double m; 
    cin>>n; 
    n++; 
    m = sqrt(n); 
    l = m; 
    while (m - l != 0){ n++; m = sqrt(n); l = m; } 
    cout<<n; 
}