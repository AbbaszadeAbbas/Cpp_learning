#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;
ll a,ans;
char g[100][100];
bool color[100];
void dfs(ll num)
{
    color[num] = 1;
    for(ll i = 0;i<a;i++)
    {
        if(g[num][i] == '1' and color[i] == 0)dfs(i);
    }
}
void result()
{
    cin>>a;
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j<a;j++)
        {
            cin>>g[i][j];
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