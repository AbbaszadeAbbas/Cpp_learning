#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n,sum=0; 
    cin>>n;
    long long a[n];
    for(long long i=0; i<n; i++) {
        cin>>a[i]; 
    }
    sort(a,a+n); 
    for(long long i=0; i<n; i++){ 
        if(a[n-1]!=a[i] and a[i]!=a[0]) sum+=a[i];
    } 
    cout<<sum; 
}