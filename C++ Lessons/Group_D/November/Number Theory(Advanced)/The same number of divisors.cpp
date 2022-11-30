#include <bits/stdc++.h>
using namespace std;
int main() {
    long long x,y,counter,ans = -1,answer;
    map<long long, long long>m;
    cin>>x>>y;

    for(long long j = x;j<=sqrt(y);j++){
        counter = 0;
        for(long long i = 1;i<=j;i++)if(j%i == 0)counter++;
        m[counter]++;
    }

    for(auto x:m){
        if(ans<=x.second){
            ans = x.second;
            answer = x.first;
        }
    }
    cout<<answer<<" "<<ans+2;
}