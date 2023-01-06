#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,helper;
    cin>>a;
    ll m[a][a];
    for(ll i = 0; i < a; i++)
    {
        for(ll j = 0; j < a; j++)
        {
            cin>>m[i][j];
        }
    }
    for(ll i = 0; i < a; i++)
    {
        for(ll j = i+1; j < a; j++)
        {
            if(m[i][j] == 1)
            {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }
}