#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;
set<ll>s1, s2, s3;
multiset<ll>ms;
vector<ll>v, v2;
vector<pair<ll,ll>>vp;
map<ll,ll>m;
multimap<ll,ll>mm;
ll a,helper,ans,i,j,massive11[101][101], massive1[101], massive[101], ans1 , ans2, ans3;
bool check = false;
void result()
{
    cin>>a;
    for(i = 1;i<=a;i++)
    {
        ans+=i;
        v.push_back(i);
    }
    if(ans%3 != 0){cout<<"IMPOSSIBLE"; return;}
    ans1 = ans/3 - 1;
    ans2 = ans/3;
    ans3 = ans/3 + 1;
    ll assist = v[a-1];
    ll as = 0;
    ll sa = 0;
    m[a] = 2;
    v.erase(v.begin() + a-1);
    for(ll i = v.size()-1;i>=0;i--)
    {
        if(v[i] + assist == ans2){
            m[v[i]] = 2;
            v.erase(v.begin() + i);
        }
    }
    as = v[v.size() - 1];
    m[as] = 1;
    v.erase(v.begin() + v.size() - 1);
    for(ll i = 0;i<=v.size() - 1;i++)
    {
        if(v[i] + as == ans1)
        {
            m[v[i]] = 1;
            v.erase(v.begin() + i);
        }else{
            as += v[i];
            m[v[i]] = 1;
            v.erase(v.begin() + i);
        }
    }
    for(auto x:v)cout<<x<<" ";


    for(ll i = 0;i<=a;i++)
    {
        if(m[i] == 0)cout<<i<<" "<<3<<endl;
        else cout<<i<<" "<<m[i]<<endl;
    }
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}