#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775807
using namespace std;
void result()
{
    ll a,helper,ans = 0,i = 0,j = 0;
    map<ll,ll>m;
    vector<ll>v;
    multiset<ll>s;
    cin>>a;
    for(ll x = 0;x<a;x++)
    {
        cin>>helper;
        v.push_back(helper);
    }
    helper = 0;
    for(ll i = 0;i<a;i++)
    {
        if(s.size() == 0)
        {
            s.insert(v[i]);
        }else{
            auto base = s.upper_bound(v[i]);
            if(base == s.end())
            {
                s.insert(v[i]);
            }else{
                s.insert(v[i]);
                s.erase(base);
            }
        }
    }
    cout<<s.size();
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}