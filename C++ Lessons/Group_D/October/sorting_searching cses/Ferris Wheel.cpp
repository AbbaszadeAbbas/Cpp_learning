#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,helper,count = 0;
    cin>>a>>b;
    vector<long long>v;
    for(long long i =0;i<a;i++){
        cin>>helper;
        v.push_back(helper);
    }
    sort(v.begin(), v.end());
    long long l = 0;
    long long r = a-1;
    while(l <= r){
        if(v[l] + v[r] <= b){
            l++;
            r--;
        }else{
            r--;
        }
        count++;
    }
    cout<<count<<endl;
}