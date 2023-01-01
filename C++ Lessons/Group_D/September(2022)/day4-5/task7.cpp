#include <bits/stdc++.h>
using namespace std;
int main(){
    long long num;
    vector<long long>a;
    string input;
    while(cin>>input){
        if(input=="push"){
            cin>>num;
            a.push_back(num);
        }
        if(input=="top"){
            if(a.size()==0){
                continue;
            }else if(a.size()!=0){
                cout<<a[a.size()-1]<<endl;
            }
        }
        if(input=="pop"){
            a.erase(a.end()-1);
        }
    }
}