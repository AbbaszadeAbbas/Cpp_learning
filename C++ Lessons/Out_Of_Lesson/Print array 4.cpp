#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper;
    cin>>a;
    vector<long long>v;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        if(helper<0){
            v.push_back(helper);
        }
    }
    if(v.size()>0){
        cout<<v.size()<<endl;
        for(long long i = v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
    }else if(v.size() == 0){
        cout<<"NO";
    }
}