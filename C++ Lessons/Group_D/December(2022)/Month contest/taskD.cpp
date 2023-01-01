#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size,counter = 1;
    cin>>size;
    vector<pair<long long,string>>v;
    string helper;
    long long r,s,d;
    while(size--){
        cin>>helper>>r>>s>>d;
        v.push_back(make_pair((2*r)+(3*s)+d, helper));
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[0].second;
    cout<<endl;
    cout<<v[1].second;
}