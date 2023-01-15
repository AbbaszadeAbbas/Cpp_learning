#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775807
using namespace std;
ll color[101];
ll graph[101][101];
void solve(ll a,ll number)
{
    color[number] = 1;
    for(ll i = 0;i<a;i++)
    {
        if(graph[number][i] == 1 and color[i] == 0)
        {
            solve(a, i);
        }
    }
}
void result()
{
    ll a,ans = 0;
    cin>>a;
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j<a;j++)
        {
            cin>>graph[i][j];
        }
    }
    for(ll i = 0;i<a;i++)
    {
        if(color[i] == 0)
        {
            solve(a, i);
            ans++;
        }
    }
    cout<<ans;
}
int main()
{
    result();
    cout<<endl;
    system("pause");
    return 0;
}