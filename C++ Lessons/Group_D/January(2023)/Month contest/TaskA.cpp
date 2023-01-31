#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;
set<ll>s;
multiset<ll>ms;
vector<ll>v;
vector<pair<ll,ll>>vp;
map<ll,ll>m;
multimap<ll,ll>mm;
ll a,helper,ans,i,j,massive11[101][101], massive1[101], massive[101];
bool check = false;
void result()
{
    cin>>a;
    if(a>1 and a<=26)cout<<"MAYBE";
    if(a>26)cout<<"YES";
    if(a == 0 or a == 1)cout<<"NO";
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}