#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void result()
{
    ll a;
    cin>>a;
    ll m[a+1][a+1];
    for(ll i = 1;i<=a;i++)
    {
        for(ll j = 1;j<=a;j++)
        {
            cin>>m[i][j];
        }
    }
    for(ll i = 1;i<=a;i++)
    {
        for(ll j = 1;j<=a;j++)
        {
            for(ll z = 1;z<=a;z++)
            {
                if(i != j and j != z and i != z and m[i][j] == 1 and m[j][z] == 1 and m[i][z] != 1)
                {
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}