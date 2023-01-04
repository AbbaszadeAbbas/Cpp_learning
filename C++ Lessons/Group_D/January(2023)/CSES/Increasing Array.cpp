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
    // sort(v.begin(),v.end());
    for(ll i = 1;i<a;i++){
        if(v[i-1] > v[i])
        {
            j+=v[i-1]-v[i];
            v[i] = v[i-1];
        }
    }
    cout<<j;
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}