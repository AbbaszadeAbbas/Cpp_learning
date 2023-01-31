#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;
ll a,color[101], g[101][101], helper;
void dfs(ll num)
{
    color[num] = 1;
    for(ll i = 0;i<a and helper!=1;i++)
    {
        if(g[num][i] == 1 and color[i] == 0)
        {
            dfs(i);
        }else if(g[num][i] == 1 and color[i] == 1)
        {
            helper = 1;
        }
    }
    color[num] = 2;
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
    for(ll i = 0;i<a  and helper != 1;i++)
    {
        if(color[i] == 0)
        {
            dfs(i);
        }
    }
    cout<<helper;
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}