#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,counter = 0;
    cin>>a>>b;
    string helper;
    for(long long i = a;i<=b;i++){
        counter = 0;
        helper = to_string(i);
        for(long long j = 0;j<helper.size();j++){
            if(helper[j] == '1' or helper[j] == '3' or helper[j] == '5' or helper[j] == '7' or helper[j] == '9'){
                counter++;
            }
        }
        if(counter == helper.size()){cout<<helper<<" ";}
    }
}