#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, u, v, say = 0;
    cin>>n>>m;
    int g[n+1][n+1];
    memset(g, 0, sizeof(g));
    while(m--){
        cin>>u>>v;
        g[u][v] = g[v][u] = 1;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(g[i][j] == 1){
                say++;
            }
        }
    }
    if(say == n*(n-1)){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
