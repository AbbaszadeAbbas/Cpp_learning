#include <bits/stdc++.h>
using namespace std;
int main(){
    long long array_size,helper,result,last_element = 0;
    cin>>array_size;
    set<long long>a;
    for(int i = 0;i<array_size;i++){
        cin>>helper;
        if(helper == last_element){
            cout<<helper;
            return 0;
        }
        a.insert(helper);
        last_element = helper;
    }

}
