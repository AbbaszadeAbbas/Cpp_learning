#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    getline(cin, a);
    vector<char>chv;
    vector<char>result;
    for(long long i = 0;i<a;i++){
        if(a[i] == '('){
            while(a[i] != ')'){
                if(a[i-1] == ')'){
                    break;
                }
                chv.push_back(a[i]);
            }
        }
    }
}