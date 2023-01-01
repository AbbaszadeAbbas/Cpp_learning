#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,helper;
    cin>>a>>b;
    vector<long long>v;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        v.push_back(helper);
    }
    long long l = 0,r = a-1;
    while(r>l){
        if(v[r] + v[l] == b){
            cout<<"YES";
            return 0;
        }else if(v[r] + v[l] < b){
            l++;
        }else if(v[r] + v[l] > b){
            r--;
        }
    }
    cout<<"NO";
    return 0;
}