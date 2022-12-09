#include <bits/stdc++.h>
using namespace std;
int main() {
    map<long long,long long>m;
    long long a,helper,counter   = 0;
    cin>>a;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        m[helper]++;
    }
    for(auto x:m){
        if(x.second >= 4){
            counter+=x.second/4;
        }
    }
    cout<<counter;
}