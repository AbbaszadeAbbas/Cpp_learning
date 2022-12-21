#include <bits/stdc++.h>
#define MAX 2000000
using namespace std;
vector<int> phi(MAX+1);
vector<int> sodf(MAX+1);
void phi_1_to_n(){
    for (int i = 0; i <= MAX; i++){phi[i] = i;}
    
    for (int i = 2; i <= MAX; i++){
        if (phi[i] == i){
            for (int j = i; j <= MAX; j += i){
                phi[j] -= phi[j] / i;
            }
        }
    }
}
void prefix_sum_sodf(){
    sodf[1] = 1;
    int step, fi;
    for(int i = 2; i <= MAX; i++){
        fi = phi[i];
        step = 1;
        while(fi != 1){
            step++;
            fi = phi[fi];
        }
        sodf[i] = sodf[i-1] + step;
    }
}
int main(){
    phi_1_to_n();
    prefix_sum_sodf();
    int t, m, n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<sodf[n] - sodf[m-1]<<endl;
    }
}