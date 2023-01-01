#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[100000], n = 0;
    while(cin>>a[n]){
      n++;
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++){
      cout<<a[i]<<" ";
    }
}