#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void result()
{
    ll a,ans = 1;
    cin>>a;
    for(ll i = 1;i<=a;i++)ans+=i*2;
    cout<<ans;
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}