#include <bits/stdc++.h>
using namespace std; 
int main( ) { 
    long long size;
    bool helper=true;
    cin>>size;
    for(long long i=2;i<=sqrt(size);i++) {
        if(size%i==0) { 
            helper=false; 
            break; 
        } 
    }
    if(helper)cout<<"Yes";
    else cout<<"No"; 
}