#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s,k,helper,l,r,count = 0;
    cin>>s>>k;
    vector<long long>v;
    for(long long i = 0;i<s;i++){
        cin>>helper;
        v.push_back(helper);
    }
    sort(v.begin(),v.end());
    if(v[s-1] > k){
        cout<<"Impossible"<<endl;
        return 0;
    }
    l = 0;
    r = s-1;
    while(l<=r){
        if(v[l] + v[r] <= k){
            l++;
            r--;
        }else{
            r--;
        }
        count++;
    }
    cout<<count<<endl;
}