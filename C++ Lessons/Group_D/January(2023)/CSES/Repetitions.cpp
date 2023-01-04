#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775807
using namespace std;
void result()
{
    ll ans = 0;
    char ch;
    string a;
    ll counter = 0;
    vector<ll>v;
    cin>>a;
    ch = a[0];
    for(auto x:a)
    {
        if(x == ch)
        {
            counter++;
        }else{
            ch = x;
            v.push_back(counter);
            counter = 0;
            counter++;
        }
    }
    v.push_back(counter);
    for(auto x:v)
    {
        if(ans < x)
        {
            ans = x;
        }
    }
    cout<<ans;
}
int main()
{
    result();
    cout<<endl;
//     system(pause);
    return 0;
}