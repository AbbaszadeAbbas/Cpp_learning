#include<bits/stdc++.h>
#define ll long long
#define MAX 9223372036854775807
using namespace std;
void result()
{
    ll sum = 0;
    string a;
    while(getline(cin, a))
    {
        for(char x:a)
        {
            if((int)x>=48 and (int)x<=57){
                sum+=(int)x - 48;
            }
        }
    }
    cout<<sum;
}
int main()
{
    result();
    cout<<endl;
//     system("pause");
    return 0;
}