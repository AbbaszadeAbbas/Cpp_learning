#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775807
using namespace std;
void result()
{
    ll a,helper,ans = 0,i = 0,j = 0;
    map<ll,ll>m;
    vector<ll>v;
    set<ll>s;
    cin>>a;
    for(ll x = 0;x<a;x++)
    {
        cin>>helper;
        v.push_back(helper);
    }
    helper = 0;
    while(i<a and j<a)
    {
        while(j<a and !s.count(v[j]))
        {
            s.insert(v[j]);
            ans = max(ans, j-i+1);
            j++;
        }
        while(j<a and s.count(v[j]))
        {
            s.erase(v[i]);
            i++;
        }
    }
    cout<<ans;
}
int main()
{
    result();
    cout<<endl;
    system("pause");
    return 0;
}