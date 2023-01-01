#include <bits/stdc++.h>
using namespace std;
bool prm(long long size) { 
    bool helper=true;
    for(long long i=2;i<=sqrt(size);i++) {
        if(size%i==0) { 
            helper=false; 
            break; 
        } 
    }
    if(helper)  return true;
    else return false;
}
int main() {
    long long num,indx,use = 1;
    bool cd = true;
    cin>>num>>indx;
    long long sq = sqrt(num);
    vector<long long>v;
    for(long long i = 2;i<=num;i++){
        use = 1;
        if(prm(i) == true){
            while(use*i<=num){
                for(long long k = 0;k<v.size();k++){
                    if(use*i == v[k]){
                        cd = false;
                    }
                }
                if(cd){
                    v.push_back(use*i);
                }
                cd = true;
                use++;
            }
        }
    }
    cout<<v[indx-1];
}