#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,x,y,ans1,ans2;
    cin>>a>>b;
    ll m[a][a];
    memset(m, 0,sizeof(m));
    vector<ll>v1;
    vector<ll>v2;
    while(b--)
    {
        cin>>x>>y;
        m[x-1][y-1] = 1;
    }
    for(ll i = 0;i<a;i++)
    {
        ans1 = 0;
        ans2 = 0;
        for(ll j = 0;j<a;j++){
            ans1+=m[j][i];
            ans2+=m[i][j];
        }
        v1.push_back(ans1);
        v2.push_back(ans2);
    }
    for(ll i = 0;i<v1.size();i++)
    {
        cout<<v1[i]<<" "<<v2[i]<<endl;
    }
}