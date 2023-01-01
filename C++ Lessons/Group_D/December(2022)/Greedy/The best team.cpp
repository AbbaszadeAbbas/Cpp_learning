#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,helper;
    cin>>a>>b;
    vector<long long>v;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        v.push_back(helper);
    }
    sort(v.begin(), v.end());
    if(v[0] + v[1] > b){
        cout<<-1;
        return 0;
    }
    long long l = 0,r = a-1,ans = 0;
    while(r>l){
        long long sum = v[r]+v[l];
        if(sum<=b){
            ans = max(ans, sum);
            l++;
        }else{
            r--;
        }
    }
    cout<<ans;
}