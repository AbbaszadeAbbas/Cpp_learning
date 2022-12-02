#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long n,m,i,j;
    cin>>n>>m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(i==0 or i == n-1)cout<<"*";    
            else{
                if(j==0 or j == m-1)cout<<"*";
                else cout<<" ";
            }
        } 
        cout<<endl; 
    } 
}