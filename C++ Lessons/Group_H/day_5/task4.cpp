#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, sum = 0;
    cin>>t;
    while(t--){
        cin>>n;
        for(int j = 1; j <= n; j += 2){
            sum += j;
        }
        cout<<sum<<endl;
        sum = 0;
    }

}
