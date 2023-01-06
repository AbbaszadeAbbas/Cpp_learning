#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void result()
{
    ll a;
    cin>>a;
    ll m[a][a];
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j<a;j++)
        {
            cin>>m[i][j];
        }
    }
    
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j<a;j++)
        {
            if(i == j and m[i][j] == 1){cout<<"YES";return;}
        }
    }
    
    cout<<"NO";
}
int main()
{
    result();
    cout<<endl;
//     system(pause);
    return 0;
}