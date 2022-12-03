#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long i,m,n,k,d; 
    cin>>m>>n>>k; 
    cout<<m/n<<"."; 
    d=m%n; 
    for(i=0; i<k; i++){ 
        d*=10; 
        cout<<d/n;
        d%=n;
    }
}