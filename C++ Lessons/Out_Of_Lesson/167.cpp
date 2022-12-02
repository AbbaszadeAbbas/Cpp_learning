#include <bits/stdc++.h>
using namespace std;
int main() { 
    long n; 
    cin>>n; 
    long a[n]; 
    for(int i=0;i<n;i++) { 
        cin>>a[i]; 
    } 
    long maks=a[0]; 
    long mini=a[0]; 
    for(int i=0;i<n;i++) { 
        if(a[i]>maks) { 
            maks=a[i]; 
        } if(mini>a[i]) { 
            mini=a[i]; 
        } 
    } 
    long k=maks-mini; 
    for(int i=0;i<n;i++) { 
        a[i]-=k; 
        cout<<a[i]<<' '; 
    } 
}