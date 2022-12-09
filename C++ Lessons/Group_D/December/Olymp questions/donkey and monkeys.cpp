#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, mod = 1000000007;
    cin>>n>>m;
    if(abs(n - m) > 1){
        cout<<0<<endl;
    }
    else{
        long long dog = 1;
        long long mon = 1;
        for(int i = 1; i <= n; i++){
            dog = (dog*i)%mod;
        }
        for(int i = 1; i <= m; i++){
            mon = (mon*i)%mod;
        }
        if(dog == mon){
            cout<<2*dog*mon%mod<<endl;
        }
        else{
            cout<<dog*mon%mod<<endl;
        }
    }
}