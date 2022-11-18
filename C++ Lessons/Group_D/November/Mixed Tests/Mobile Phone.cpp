#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    vector<long long>reqemler;
    for(long long i = 1;i<10;i++){
        reqemler.push_back(i);
    }
    set<long long>s;
    while(cin>>a){
        s.insert(a);
    }
    for(auto& i:s){
        cout<<i<<" ";
    }
}