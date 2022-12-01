#include<bits/stdc++.h>
using namespace std;
int main(){ 
    long long n,i,t;
    cin>>n; 
    for(i=1; i++; i<10000000){ 
        if(pow(2,i)>=n) break; 
    } 
    i--; 
    t=pow(2,i); 
    cout<<t; 
}