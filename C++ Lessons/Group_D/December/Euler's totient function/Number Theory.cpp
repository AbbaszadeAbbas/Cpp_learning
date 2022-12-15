#include <bits/stdc++.h>
using namespace std;
long long phi(long long n){
    long long ans = n;
    for(long long i = 2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){ n/=i;}
            ans -= ans/i;
        }
    }
    if(n>1){
        ans-=ans/n;
    }
    return ans;
}
long long d(long long n){
    long long counter = 0;
    long long sq = sqrt(n);
    for(long long i = 1;i<=sq;i++){
        if(n%i == 0){
            counter++;
            if(n/i != i){
                counter++;
            }
        } 
    }
    return counter;
}
int main() {
    long long n;
    while(cin>>n){
        cout<<n - phi(n) - d(n) + 1<<endl;
    }
}