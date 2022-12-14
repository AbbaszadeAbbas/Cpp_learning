#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,x,y;
    cin>>a;
    vector<pair<long long, pair<long long,long long>>>v;
    for(long long i =  0;i<a*2;i++) {
        cin>>x>>y;
        v.push_back({x-y,{x,y}});
    }
    sort(v.begin(), v.end());
    long long ans = 0;
    for(long long i = 0;i<a;i++){
        ans+=v[i].second.second;
    }
    for(long long i = a;i<a*2;i++){
        ans+=v[i].second.first;
    }
    cout<<ans;
}