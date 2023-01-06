#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,ans = 0;
    cin>>a;
    ll m[a][a];
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j < a;j++)
        {
           cin>>m[i][j];
        }
    }
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j<a;j++)
        {
            if(m[i][j] == 1)ans++;
        }
        cout<<ans<<endl;
        ans = 0;
    }
}