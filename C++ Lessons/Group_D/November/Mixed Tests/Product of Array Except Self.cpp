#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper,hasil = 1;
    cin>>a;
    vector<long long>v;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        if(helper!=1){
            v.push_back(helper);
        }
    }
    for(long long i = 0;i<v.size();i++){
        hasil = 1;
        for(long long j = 0;j<v.size();j++){
            hasil *= v[j];
        }
        cout<<hasil<<" ";
    }
}