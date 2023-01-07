#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,x,y;
    cin>>a>>b;
    map<ll,ll>m;
    for(ll i = 0;i < b;i++)
    {
        cin>>x>>y;
        m[x-1]++;
        m[y-1]++;
    }
    for(ll i = 1;i < a;i++)
    {
        if(m[i] != m[i-1]){cout<<"NO";return 0;}
    }
    cout<<"YES";
}