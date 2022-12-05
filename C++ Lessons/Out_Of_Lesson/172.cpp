#include<bits/stdc++.h>
using namespace std;
int main(){ 
    long long n,count,i,j,t,l=0,r; 
    vector<long long> v; 
    cin>>n; 
    long long a[n];
    for(i=0; i<n; i++) cin>>a[i]; 
    for(i=0; i<n; i++){ 
        count=0; 
        t=0; 
        for(r=0; r<l; r++){ 
            if(a[i]==v[r]){
                t=1; 
                break;
            } 
        } 
        for(j=0; j<n; j++){
            if(a[i]==a[j] and t==0) count++; 
            if(count==2){ 
                v.push_back(a[i]);
                l++; 
                break;
            } 
        } 
    } 
    if(l==0) cout<<"NO"; 
    else for(i=0; i<l; i++) cout<<v[i]<<" ";
}