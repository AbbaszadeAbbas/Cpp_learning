#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper;
    cin>>a;
    vector<long long>v;
    long long lis[a];
    for(long long i = 0;i<a;i++){
        cin>>helper;
        v.push_back(helper);
    }
    lis[0] = 1;
    for(long long i = 1;i<a;i++){
        lis[i] = 1;
        for(long long j = 0;j<i;j++){
            if(v[i]>v[j] and lis[j]+1>lis[i]){
                lis[i] = lis[j]+1;
            }
        }
    }
    cout<<*max_element(lis, lis+a);
}