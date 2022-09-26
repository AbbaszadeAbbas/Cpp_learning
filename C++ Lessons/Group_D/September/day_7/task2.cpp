#include <bits/stdc++.h>
using namespace std;
int main(){
    set<long long>result;
    long long coxluqlarin_sayi,helper,coxlugun_elementlerinin_sayi;
    cin>>coxluqlarin_sayi>>coxlugun_elementlerinin_sayi;
    long long coxlug[coxluqlarin_sayi][coxlugun_elementlerinin_sayi];
    for(long long i = 0;i<coxluqlarin_sayi;i++){
        for(long long j = 0;j<coxlugun_elementlerinin_sayi;j++){
            cin>>coxlug[i][j];
            result.insert(coxlug[i][j]);
        }
    }
    cout<<result.size();
}
