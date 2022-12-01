#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long l=0,n,i,k; 
    cin>>n; 
    for(i=0; i<n; i++){ 
        l++; 
        for(k=0; k<3; k++){ 
            if(l!=1 and l!=n and k!=0 and k!=2) cout<<" "; 
            else cout<<"*"; 
        } 
        cout<<endl; 
    } 
}