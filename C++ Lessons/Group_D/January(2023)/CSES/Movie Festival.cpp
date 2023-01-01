#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main()
{
    ll num,helper1,helper2,counter = 1;
    cin>>num;
    vector<pair<ll,ll>>v;
    for(ll i = 0;i<num;i++)
    {
        cin>>helper1>>helper2;
        v.push_back(make_pair(helper2,helper1));
    }
    sort(v.begin(),v.end());
    ll maximum = v[0].first;
    for(ll i = 1;i<num;i++)
    {
        if(v[i].second >= maximum)
        {
            maximum = v[i].first;
            counter++;
        }
    }
    cout<<counter;
}