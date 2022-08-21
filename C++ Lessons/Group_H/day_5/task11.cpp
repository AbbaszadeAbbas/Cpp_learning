#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long k, cem = 0;
    cin>>k;
    for(int i = 1; true; i++){
        cem += i;
        if(cem%k == 0){
            cout<<i<<endl;
            break;
        }
    }
}
