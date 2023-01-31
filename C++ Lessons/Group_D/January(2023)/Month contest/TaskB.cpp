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
ll a,helper,i,j,massive11[101][101], massive1[101], massive[101];
string ans1, ans2;
bool check = false;
void result()
{
    cin>>a;
    while(a--)
    {
        cin>>helper;
        string s = to_string(helper);
        i = s.size();
        if(helper < 8)
        {
            if(helper%2 == 0)cout<<helper+2;
            else cout <<helper+1;
        }
        else if(helper == 8 || helper == 9 || helper == 10)cout<<11;
        else
        {
            while(i--){ ans1 += s[0]; ans2 += s[0]+1; }
            if(s < ans1) cout<<ans1;
            else cout<< ans2;
        }
        cout<<endl;
    }
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}