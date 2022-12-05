#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper;
    cin>>a;
    vector<long long>v;
    bool check = true;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        check = true;
        for(long long i = 0;i<v.size();i++){
            if(helper == v[i]){
                check = false;
            }
        }
        if(check == true){
            v.push_back(helper);
        }
    }
    for(long long i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}