#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,helper,count = 0,i = 0,j = 0;
    cin>>a>>b>>c;
    vector<long long>v1;
    vector<long long>v2;
    for(long long i = 0;i<a;i++){
        cin>>helper;
        v1.push_back(helper);
    }
    for(long long i = 0;i<b;i++){
        cin>>helper;
        v2.push_back(helper);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    while(i<a && j < b){
        if(v1[i] + c >= v2[j] && v1[i] - c <= v2[j]){
            i++;
            j++;
            count++;
        }else if(v1[i]>v2[j]){
            j++;
        }else{
            i++;
        }
    }
    cout<<count<<endl;
}