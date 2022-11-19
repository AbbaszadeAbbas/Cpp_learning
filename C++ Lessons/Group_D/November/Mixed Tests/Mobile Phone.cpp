#include <bits/stdc++.h>
using namespace std;
int main() {
    long long say = 0;
    char ch;
    vector<char>v;
    vector<int>c;
    while(cin>>ch){
        v.push_back(ch);
    }
    for(int i = 0;i<10;i++){
        say = 0;
        for(int j = 0;j<v.size();j++){
            if(i!=v[j]-48){
                say++;
            }
        }
        if(say == v.size()){
            c.push_back(i);
        }
    }
    cout<<(long long)c.size()<<endl;
    for(long long i = 0;i<c.size();i++){
        cout<<(long long)c[i]<<" ";
    }
}