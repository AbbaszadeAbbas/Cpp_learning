#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,helper;
    cin>>a;
    vector<ll>v;
    for(ll i = 0;i<a;i++)
    {
        cin>>helper;
        v.push_back(helper);
    }
    ll assistant = v[0];
    ll ans = v[0];
    for(ll i = 1;i<a;i++)
    {
        assistant = max(v[i], assistant+v[i]);
        if(assistant > ans)
        {
            ans = assistant;
        }
    }
    cout<<ans;
}