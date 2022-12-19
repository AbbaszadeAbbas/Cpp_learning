#include <bits/stdc++.h>
using namespace std;
int phi(long long a){
    long long ans = a;
    long long sq = sqrt(a);
    for(long long i = 2;i<=sq;i++){
        if(a%i == 0){
            while(a%i == 0){a /= i;}
            ans -= ans/i;
        }
    }
    if(a>1){
        ans -= ans/a;
    }
    return ans;
}
int main() {
    long long sum[10001] = {0};
    for(long long i = 1;i<=10000;i++){
        sum[i] = sum[i-1] + phi(i);
    }
    long long a,helper;
    cin>>a;
    while(a--){
        cin>>helper;
        cout<<sum[helper]*sum[helper]<<endl;
    }
}