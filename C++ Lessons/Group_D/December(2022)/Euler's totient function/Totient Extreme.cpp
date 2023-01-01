#include <bits/stdc++.h>
using namespace std;
long long totient(long long a){
    long long ans = a;
    long long sq = sqrt(a);
    for(long long i = 2;i<=sq;i++){
        if(a%i == 0){
            while(a%i == 0){a/=i;}
            ans -= ans/i;
        }
    }
    if(a>1){
        ans -= ans/a;
    }
    return ans;
}
int main(){
    long long m[10001] = {0};
    for(long long i = 1;i<=10000;i++){
        m[i] = m[i-1] + totient(i);
    }
    long long a;
    cin>>a;
    long long helper;
    while(a--){
        cin>>helper;
        cout<<m[helper]*m[helper]<<endl;
    }
}