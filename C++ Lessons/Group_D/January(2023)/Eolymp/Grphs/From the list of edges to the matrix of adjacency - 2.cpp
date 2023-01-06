#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,x,y;
    cin>>a>>b;
    ll m[a][a];
    memset(m,0,sizeof(m));
    while(b--)
    {
        cin>>x>>y;
        m[x-1][y-1] = 1;
    }
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j<a;j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}