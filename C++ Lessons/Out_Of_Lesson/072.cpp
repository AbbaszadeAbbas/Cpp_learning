#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<long long>v;
    long long helper;
    cin>>helper;
    v.push_back(helper);
    cin>>helper;
    v.push_back(helper);
    cin>>helper;
    v.push_back(helper);
    sort(v.begin(), v.end());
    cout<<v[0]<<" "<<v[1]<<" "<<v[2];
}