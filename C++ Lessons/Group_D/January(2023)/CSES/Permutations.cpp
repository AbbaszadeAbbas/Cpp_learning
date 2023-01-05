#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void result()
{
    vector<ll>v1;
    vector<ll>v2;
    ll a;
    cin>>a;
    if(a == 1){cout<<1;return;}
    if(a == 2 or a == 3){cout<<"NO SOLUTION";return;}
    
    for(ll i = a;i>0;i--)
    {
        if(i%2 == 0)
        {
            v1.push_back(i);
        }else{
            v2.push_back(i);
        }
    }
    if(a == 4)
    {
        cout<<2<<" "<<4<<" "<<1<<" "<<3; 
    }else{
        for(auto x:v1)
        {
            cout<<x<<" ";
        }
        for(auto z:v2)
        {
            cout<<z<<" ";
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