#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,x,y,ans;
    cin>>a>>b;
    ll m[a][a];
    memset(m, 0,sizeof(m));
    while(b--)
    {
        cin>>x>>y;
        m[x-1][y-1] = m[y-1][x-1] = 1;
    }
    for(ll i = 0;i<a;i++)
    {
        ans = 0;
        for(ll j = 0;j<a;j++)
        {
            ans+=m[i][j];
        }
        cout<<ans<<endl;
    }
}