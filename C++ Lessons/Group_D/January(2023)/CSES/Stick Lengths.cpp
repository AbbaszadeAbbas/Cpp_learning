#include<bits/stdc++.h>
#define ll long long
using namespace std;
void result()
{
    ll a,helper,helper2 = 0;
    cin>>a;
    vector<ll>v;
    for(ll i = 0;i<a;i++)
    {
        cin>>helper;
        v.push_back(helper);
    }
    helper = 0;
    sort(v.begin(),v.end());
    for(auto x:v)
    {
        helper+=abs(x-v[a/2]);
    }
    cout<<helper;
}
int main()
{
    result();
    cout<<endl;
    system("pause");
    return 0;
}