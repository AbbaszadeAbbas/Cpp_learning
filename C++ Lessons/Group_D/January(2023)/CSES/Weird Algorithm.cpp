#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775807
using namespace std;
void result()
{
    ll a,helper,ans = 0,i = 0,j = 0;
    map<ll,ll>m;
    vector<ll>v;
    set<ll>s;
    cin>>a;
    while(a!=1)
    {
        cout<<a<<" ";
        if(a%2 == 0)
        {
            a/=2;
        }
        else
        {
            a = a*3+1;
        }
    }
    cout<<a;
}
int main()
{
    result();
    cout<<endl;
    system("pause");
    return 0;
}