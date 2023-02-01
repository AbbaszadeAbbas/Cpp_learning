#include<bits/stdc++.h>
#define ll long long
#define MAX 1000000
using namespace std;
ll ans1,ans2,i;
string a;
bool check = true;
void result()
{
    cin>>a;
    while((ll)a[i]!=46)
    {
        ans1+=(ll)a[i] - 48;
        i++;
    }
    i++;
    while(i<a.size())
    {
        ans2+=(ll)a[i]-48;
        i++;
    }
    if(ans1 == ans2)cout<<"Yes";
    else cout<<"No";
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}