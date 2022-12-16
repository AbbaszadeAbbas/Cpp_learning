#include <bits/stdc++.h>
using namespace std;
int phi(int n){
    int ans = n;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            ans -= ans/i;
        }   
    }
    if(n>1) ans-=ans/n;
    return ans;
}

int main() {
    long long n,helper,h;
    cin>>n;
    for(long long z = 0;z<n;z++){
        cin>>helper;
        h = 0;
        for(long long i = 1;i<=helper;i++){
            for(long long j = 1;j<=helper;j++){
                h+=phi(i)*phi(j);
            }
        }
        cout<<h<<endl;
    }
}