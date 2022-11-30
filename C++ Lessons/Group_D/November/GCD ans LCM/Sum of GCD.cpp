#include <bits/stdc++.h>
using namespace std;
int main() {
    long long helper,size,user,total = 0;
    cin>>size;
    vector<long long>v;
    vector<long long>ans;
    vector<long long>result;
    for(long long z  = 0;z<size;z++){
        cin>>user;
        for(long long g = 0;g<user;g++){
            cin>>helper;
            v.push_back(helper);
        }
        for(long long i = 0;i<v.size();i++){
            for(long long j = i;j<v.size();j++){
                if(v[i]!=v[j]){
                    ans.push_back(__gcd(v[i],v[j]));
                }
            }
        }
        for(long long h = 0;h<ans.size();h++){
            total+=ans[h];
        }
        result.push_back(total);
        total = 0;
        v.clear();
        ans.clear();
    }
    for(long long i = 0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    
}