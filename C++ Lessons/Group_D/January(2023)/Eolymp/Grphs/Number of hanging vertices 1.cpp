#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void result()
{
    ll a,helper,ans = 0,result = 0;
    cin>>a;
    for(ll i = 1;i<=a;i++)
    {
        ans = 0;
        for(ll j = 1;j<=a;j++)
        {
            cin>>helper;
            ans+=helper;
        }
        if(ans == 1)result++;
    }
    cout<<result;
}
int main()
{
    result();
    cout<<endl;
//     system(pause);
    return 0;
}