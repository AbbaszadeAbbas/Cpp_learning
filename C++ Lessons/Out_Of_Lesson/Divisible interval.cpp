#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,helper,ans = 0,i = 0,j = 0;
    vector<ll>v;
    cin>>a;
    for(ll x = 0;x<a;x++){cin>>helper;v.push_back(helper);}
    while(i<a)
    {
        j = i+1;
        ans = v[i];
        while(j<a)
        {
            ans+= v[j];
            j++;
            if(ans%a == 0)
            {
                i++;
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
        i++;
    }
    cout<<-1<<" "<<-1;
}