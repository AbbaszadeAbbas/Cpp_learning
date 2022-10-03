#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s1,s2,helper1,helper2,counter;
    cin>>s1>>s2;
    map<long long,long long>m;
    vector<long long>v;
    for(int i = 0;i<s1;i++){
        cin>>helper1;
        m[helper1]++;
    }
    for(int i =0;i<s2;i++){
        cin>>helper2;
        v.push_back(helper2);
    }
    for(int i =0;i<s2;i++){
        counter = v[i];
        cout<<m.count(counter)<<endl;
    }
}