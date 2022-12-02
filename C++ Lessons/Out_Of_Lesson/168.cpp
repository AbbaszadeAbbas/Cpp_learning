#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; 
    cin>>n; 
    long long a[n];
    for(int i=0;i<n;i++) { 
        cin>>a[i]; 
    } 
    long long maks=a[0]; 
    long long mini=a[0]; 
    for(int i=0;i<n;i++) { 
        if(a[i]>maks) maks=a[i]; 
        if(a[i]<mini) mini=a[i]; 
    }
    for(int i=0;i<n;i++) { 
        if(a[i]>0) a[i]-=maks/2; 
        if(a[i]<0) a[i]-=mini/2;
    } 
    for(int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    } 
}