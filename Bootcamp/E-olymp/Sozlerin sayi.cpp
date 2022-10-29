#include <bits/stdc++.h> 
using namespace std;
int main() {
    long long count = 1;
    string s;
    getline(cin, s);
    vector<string>v;
    for(long long i = 0;i<s.size();i++){
        if(s[i] == ' '){
            if(s[i-1] != ' '){
                count++;    
            }
        }
    }
    cout<<count;
}