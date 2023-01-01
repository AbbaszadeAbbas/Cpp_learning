#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper,ans2,ans1,say = 0;
    cin>>a;
    map<long long, long long>m;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        m[helper] += 1;
    }
    ans2 = m[helper];
    for(auto x:m){
        if(x.second > ans2){
            ans2 = x.second;
            ans1 = x.first;
        }else if(x.second == ans2){
            ans1 = x.first;
            say++;
        }
    }
    if(say>1){
        cout<<-1;
    }else{
        cout<<ans1;
    }
}