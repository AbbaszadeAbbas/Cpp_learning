#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, long long>m;
    string s,result;
    long long n;
    cin>>n;
    auto maximum = 0;
    while(n--){
        cin>>s;
        m[s]++;
    }
    for(auto x:m){
        if(maximum<x.second){
            maximum = x.second;
            result = x.first;
        }
        if(maximum == x.second){
            result = x.first;
        }
    }
    cout<<result<<" "<<maximum<<endl;
}