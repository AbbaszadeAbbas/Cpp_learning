#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper;
    cin>>a;
    map<long long,long long>m;
    while(a--){
        cin>>helper;
        m[helper]++;
    }
    for(auto x:m){
        if(x.second > 1){
            cout<<x.first<<" ";
        }
    }
}