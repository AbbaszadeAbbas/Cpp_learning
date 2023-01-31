#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
set<ll>s;
multiset<ll>ms;
vector<ll>v;
vector<pair<ll,ll>>vp;
map<ll,ll>m;
multimap<ll,ll>mm;
ll helper,ans = 0,i = 0,j = 0,massive[1000001], sj = 0 , sh = 0, sjh = 0;
int a;
void result()
{
    cin>>a;
    for(i = 0; i < a;i++)
    {
        memset(massive, 0, sizeof(massive));
        for(j = 0;j<a;j++)
        {
            cin>>massive[j];
            sjh = sh;
            sh = 0;
            sj = 0;
            if(sj < massive[j])
            {
                sj = massive[j];
                sh = j;
            }
            if(sjh  != sh)
            {
                result+= sj;
            }
        }
    }
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}