#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,helper;
    cin>>a;
    vector<long long>musbet;
    vector<long long>menfi;
    vector<long long>sifir;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        if(helper>0){
            musbet.push_back(helper);
        }else if(helper==0){
            sifir.push_back(helper);
        }else {
            menfi.push_back(helper);
        }
    }
    sort(musbet.begin(), musbet.end());
    sort(menfi.begin(), menfi.end());
    sort(sifir.begin(), sifir.end());
    for(long long i = musbet.size()-1;i>=0;i--){cout<<musbet[i]<<" ";}
    for(long long i = 0;i<menfi.size();i++){cout<<menfi[i]<<" ";}
    for(long long i = sifir.size()-1;i>=0;i--){cout<<sifir[i]<<" ";}
}