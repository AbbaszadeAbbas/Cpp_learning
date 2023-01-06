#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void result()
{
    ll a,ans;
    cin>>a;
    ll massive[a][a];
    vector<ll>helper;
    for(ll i = 0;i<a;i++)
    {
        for(ll j = 0;j<a;j++)
        {
            cin>>massive[i][j];
            if(massive[i][j] == 1)
            {
                helper.push_back(j+1);
            }
        }
        cout<<helper.size()<<" ";
        for(auto x:helper)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        helper.clear();
    }
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}