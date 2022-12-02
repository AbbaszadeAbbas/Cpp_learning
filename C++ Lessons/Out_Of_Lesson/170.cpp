#include <bits/stdc++.h>
using namespace std; 
int main() { 
    int n; 
    cin>>n; 
    int a[n];
    for(int i=0;i<n;i++) { 
        cin>>a[i]; 
    } 
    int n1=n/2; 
    int n2=n-n1; 
    int g[n]; 
    int j=1,h=0; 
    for(int i=0;i<n2;i++) { 
        g[h]=a[i]; 
        g[h+1]=0; 
        h+=2; 
    } 
    for(int i=n2;i<n1+n2;i++) {
        g[j]=a[i]; 
        j+=2;
    } for(int i=0;i<n;i++) { 
        cout<<g[i]<<" "; 
    } 
}