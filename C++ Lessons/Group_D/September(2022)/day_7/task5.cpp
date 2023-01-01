#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s,helper,first_size,last_element;
    cin>>s;
    set<long long>our_array;
    for(int i = 0;i<s;i++){
        cin>>helper;
        if(our_array.size()!=0){first_size = our_array.size();}
        our_array.insert(helper);
        if(first_size != our_array.size()){
             cout<<"No "<<our_array.size()<<endl;
        }else{
             cout<<"Yes "<<our_array.size()<<endl;
        }
    }
}