#include <bits/stdc++.h>
using namespace std;
long long maximum(string a){
    long long aa = 0,bb = 0;
    vector<long long>va,vb;
    if(a[0] == 'A') aa++;
    else bb++;
    for(long long i = 1;i<a.size();i++){
        if(a[i] == 'A' and a[i-1] == 'A'){
            aa++;
        }else if(a[i] == 'B' and a[i-1] == 'A'){
            va.push_back(aa);
            aa = 0;
            bb++;
        }else if(a[i] == 'B' and a[i-1] == 'B'){
            bb++;
        }else if(a[i] == 'A' and a[i-1] == 'B'){
            vb.push_back(bb);
            bb = 0;
            aa++;
        }
    }
    va.push_back(aa);
    vb.push_back(bb);
    long long maxi = va[0];
    for(auto x:va){
        if(maxi < x) maxi = x;
    }
    for(auto x:vb){
        if(maxi < x) maxi = x;
    }
    return maxi;
}
int main() {
    string a;
    while(cin>>a) cout<<maximum(a)<<endl;
}