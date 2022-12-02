#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size,helper;
    cin>>size;
    vector<long long>v;
    for(long long i = 0;i<size;i++){
        cin>>helper;
        v.push_back(helper);
    }
    for(long long i = v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
}