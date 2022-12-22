#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    string helper;
    cin>>a;
    vector<string>v;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        v.push_back(helper);
    }
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<endl;
    }
}