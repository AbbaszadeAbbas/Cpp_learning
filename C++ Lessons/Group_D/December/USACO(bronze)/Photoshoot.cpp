#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper;
    cin>>a;
    vector<long long>v;
    for(long long i = 0;i<a-1;i++){
        cin>>helper;
        v.push_back(helper);
    }
    helper = 1;
    for(long long i=0;i<a-1;i++) {
        cout<<(v[i] - helper)<<" ";
        if(i<a-2){
            helper = v[i+1] - helper;
        }
    }
    cout<<helper;
}