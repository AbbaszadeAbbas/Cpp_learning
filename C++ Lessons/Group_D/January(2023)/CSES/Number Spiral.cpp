#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void solution()
{
    ll i,j;
    cin>>i>>j;
    if(i>=j)
    {
        if(i%2 == 0)
        {
            cout<<(i-1)*(i-1) + (i-j) + i << endl;
        }else
        {
            cout<<(i-1)*(i-1) + j << endl;
        }
        return;
    } 
    if(j%2 == 0)
    {
        cout<<(j-1)*(j-1) + i << endl;
        return;
    }
    cout<<(j-1)*(j-1) + j + (j-1) << endl;
}
int main()
{
    ll a;
    cin>>a;
    while(a--)solution();
    return 0;
}