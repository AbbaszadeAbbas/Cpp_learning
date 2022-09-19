#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> a;
    vector<long long> ans;
    long long size,num,num_2;
    cin>>size;
    for(int i = 0;i<size;i++){
        cin>>num;
        if(num == 1){
            cin>>num_2;
            a.push_back(num_2);
        }else if(num == 2){
            ans.push_back(a[a.size()-1]);
            a.erase(a.end()-1);
        }
        num = 0;
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}