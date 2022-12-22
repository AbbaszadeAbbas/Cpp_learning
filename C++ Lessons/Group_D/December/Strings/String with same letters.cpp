#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    long long cs = 1,count1 = 0,count2 = 0;
    while(cin>>a>>b){
        if(a=="END" and b == "END"){
            return 0;
        }
        if(a.size() != b.size()){
            cout<<"Case "<<cs<<": different"<<endl;
            cs++;
        }else{
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            if(a == b){
                cout<<"Case "<<cs<<": same"<<endl;
                cs++;
            }else{
                cout<<"Case "<<cs<<": different"<<endl;
                cs++;
            }
        }
    }
}