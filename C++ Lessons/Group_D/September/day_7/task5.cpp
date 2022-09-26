#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s,helper,first_size,last_element;
    cin>>s;
    long long massive[s];
    set<long long>our_array;
    for(int i = 0;i<s;i++){
        cin>>helper;
        if(our_array.size()!=0){
            first_size = our_array.size();
        }else{
            first_size = 0;
        }
        our_array.insert(helper);
        massive[i] = helper;
        if(first_size < our_array.size()){
             cout<<"No "<<helper<<endl;
        }else if(first_size = our_array.size()){
             cout<<"Yes "<<massive[i-1]<<endl;
        }
    }
}
