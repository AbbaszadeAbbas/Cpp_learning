#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
void result()
{
    ll a,helper = 0,counter = 0,helper2 = 1;
    cin>>a;
    vector<ll>v;

    for(ll i = 0;i<a;i++)
    {
        cin>>helper;
        v.push_back(helper);
    }
    sort(v.begin(),v.end());

    for(ll i = 0;i<a;i++)
    {
        if(helper2 < v[i]) break;
        else helper2+=v[i];
    }
    cout<<helper2<<endl;
}
int main()
{
    result();
    system("pause");
    return 0;
}