#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,maxi;
    cin>>a;
    long long m[a];
    for(long long i = 0;i<a;i++){cin>>m[i];}
    maxi = *max_element(m+0, m+a);
    for(long long i = 0;i<a;i++){
        if(maxi != m[i]){
            cout<<m[i]<<" ";
        }
    }
    for(long long i = 0;i<a;i++){
        if(maxi == m[i]){
            cout<<maxi<<" ";
        }
    }
}