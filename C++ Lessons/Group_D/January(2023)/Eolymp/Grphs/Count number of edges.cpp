#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,sum = 0,helper;
    cin>>a;
    for(ll i = 0;i<a*a;i++){
        cin>>helper;
        sum+=helper;
    }
    cout<<sum;
}