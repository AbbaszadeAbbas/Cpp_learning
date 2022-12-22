#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,ll = 0;
    cin>>a;
    vector<long long>v;
    for(long long i = 0;i<5;i++){
        v.push_back(a%10);
        a/=10;
    }
    for(auto x:v){
        if(x%2 == 1){
            ll++;
        }
    }
    cout<<ll<<endl;
}