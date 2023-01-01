#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,helper;
    cin>>a>>b;
    long long s[a];
    map<long long, long long>m;
    for(long long i = 0;i<a;i++){
        cin>>s[i];
        m[s[i]]++;
    }
    sort(s,s+a);
    long long l = 0,r = a-1,counter = 0;
    while(r>l){
        if(s[r] + s[l] == b){
            counter++;
            if(m[s[r]] > m[s[l]]){
                l++;
            }else{
                r--;
            }
        }else if(s[r] + s[l] > b){
            r--;
        }else{
            l++;
        }
    }
    cout<<counter;
}
// 22 23 45 54 77
// 3 3 4 4 4 4 8