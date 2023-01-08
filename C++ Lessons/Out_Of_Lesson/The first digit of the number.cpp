#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775806
using namespace std;
void result()
{
    string a;
    cin>>a;
    if((int)a[0] - 48 >= 0 and (int)a[0] - 48 <= 9)cout<<a[0] - 48<<endl;
    else cout<<a[1] - 48;
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}