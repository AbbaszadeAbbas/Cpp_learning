#include <bits/stdc++.h>
using namespace std;
int main(){
    long long array_size,helper;
    cin>>array_size;
    set<long long>input;
    for(long long i = 0;i<array_size;i++){
        cin>>helper;
        input.insert(helper);
    }
    cout<<input.size();
}
