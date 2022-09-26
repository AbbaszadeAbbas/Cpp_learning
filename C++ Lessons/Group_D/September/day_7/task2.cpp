#include <bits/stdc++.h>
using namespace std;
int main(){
    set<long long>result;
    long long s,s2,helper;
    cin>>s;
    for(long long i = 0;i<s;i++){
        cin>>s2;
        for(long long j = 0;j<s2;j++){
            cin>>helper;
            result.insert(helper);
        }
    }
    cout<<result.size();
}