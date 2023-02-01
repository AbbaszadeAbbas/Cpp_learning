#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;
ll a, colour[10001], f[10001][10001],helper, hlpr,ans;
char g[10001][10001];
bool color[10001];
vector<ll>v;
void dfs(ll num)
{
    color[num] = 1;
    for(ll i = 0;i<a;i++)
    {
        if(g[num][i] == '1' and color[i] == 0)
        {
            dfs(i);
        }
    }
}
void result()
{
    cin>>a;
    for(ll i = 0;i<a;i++)
    {
        cin>>helper;
        for(ll j = 0;j<helper;j++)
        {
            cin>>hlpr;
            g[i][hlpr-1] = '1';
        }
    }
    for(ll i = 0;i<a;i++)
    {
        if(color[i] == 0)
        {
            dfs(i);
            ans++;
        }
    }
    cout<<ans;
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}