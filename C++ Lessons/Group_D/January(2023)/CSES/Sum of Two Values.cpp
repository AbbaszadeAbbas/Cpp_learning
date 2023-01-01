#include <bits/stdc++.h>
#define ll unsigned long long 
using namespace std;
int main()
{
    ll num,sum,helper,helper2;
    cin>>num>>sum;
    vector<pair<ll,ll>>v;
    for(ll i = 1;i<=num;i++)
    {
        cin>>helper;
        v.push_back(make_pair(helper,i));
    }
    sort(v.begin(),v.end());
    ll l = 0,r = num-1;
    while(l<r)
    {
        if(v[l].first + v[r].first == sum)
        {
            cout<<v[r].second<<" "<<v[l].second<<endl;
            return 0;
        }
        else if(v[l].first + v[r].first > sum)
        {
            r--;
        }
        else
        {
            l++;
        }
    }
    cout<<"IMPOSSIBLE";
}