#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
ll in[101],out[101];
void result()
{
    ll a,helper,ans1 = 0,ans2 = 0;
    cin>>a;
    for(ll i = 1;i<=a;i++)
    {
        for(ll j = 1;j<=a;j++)
        {
            cin>>helper;
            if(helper == 1)
            {
                in[j] = 1;
                out[i] = 1;
            }
        }
    }
    for(ll i = 1;i<=a;i++)
    {
        if(in[i] == 0){ans1++;}
        if(out[i] == 0){ans2++;}
    }
    cout<<ans1<<" ";
    for(ll i = 1;i<=a;i++)if(in[i] == 0)cout<<i<<" ";
    cout<<endl;
    cout<<ans2<<" ";
    for(ll i = 1;i<=a;i++)if(out[i] == 0)cout<<i<<" ";
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}