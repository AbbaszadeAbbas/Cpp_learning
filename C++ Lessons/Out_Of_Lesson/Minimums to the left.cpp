#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,mini;
    cin>>a;
    long long m[a];
    for(long long i = 0;i<a;i++){cin>>m[i];}
    mini = *min_element(m+0, m+a);
    for(long long i = 0;i<a;i++){
        if(mini == m[i]){
            cout<<mini<<" ";
        }
    }
    for(long long i = 0;i<a;i++){
        if(mini != m[i]){
            cout<<m[i]<<" ";
        }
    }
}