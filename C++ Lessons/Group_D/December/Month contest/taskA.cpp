#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,sum = 0,helper,counter = 0;
    cin>>a;
    string user;
    string s = to_string(a);
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    if(to_string(a) == s){
        cout<<0;
        return 0;
    }
    else{
        sort(s.begin(),s.end());
        helper = a;
        user = to_string(helper);
        while(user.size() == s.size()){
            helper++;
            user = to_string(helper);
            sort(user.begin(),user.end());
            if(user == s){
                cout<<helper<<endl;
                return 0;
            }
        }
    }
}