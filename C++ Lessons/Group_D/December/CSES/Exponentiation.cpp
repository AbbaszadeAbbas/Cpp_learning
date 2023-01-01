#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll s,helper1,helper2,result = 1;
    cin>>s;
    while(s--)
    {
        cin>>helper1>>helper2;
        result = 1;
        while(helper2--)
        {
            result*=helper1;
        }
        cout<<result<<endl;
    }
    
}