#include <bits/stdc++.h>
using namespace std;
int main() {
    long long helper,size;
    cin>>size;
    vector<long long>v;
    vector<long long>ans;
    vector<long long>result;
    for(long long z  = 0;z<size;z++){
        while(cin>>helper){
            v.push_back(helper);
            if(cin.get() == '\n')break;
        }
        for(long long i = 0;i<v.size();i++){
            for(long long j = 0;j<v.size();j++){
                if(v[i]!=v[j]){
                    ans.push_back(__gcd(v[i],v[j]));
                }
            }
        }
        sort(ans.begin(), ans.end());
        result.push_back(ans[ans.size()-1]);
        v.clear();
        ans.clear();
    }
    for(long long i = 0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    
}