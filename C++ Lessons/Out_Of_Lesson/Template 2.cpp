#include <bits/stdc++.h>
using namespace std;
int main() {
    bool check = true;
    long long a;
    cin>>a;
    if(a%2==1){
        for(long long i = 1;i<=a;i++){
            for(long long j = 1;j<=a;j++){
                if(i%2==1){cout<<"*";}
                else if(i%2==0 and check == true){
                    check = false;
                    if(j!=a) cout<<" ";
                    else if(j==a)  cout<<"*";
                }else{
                    check = true;
                    if(j!=1) cout<<" ";
                    else if(j==1) cout<<"*";
                }
            }
            cout<<endl;
        }
    }else{
        long long h = a-1;
        for(long long i = 0;i<=h;i++){
            for(long long j = 0;j<=h;j++){
                if(i%2==0){cout<<"*";}
                else if(i%2==1 and check == true){
                    check = false;
                    if(j!=a) cout<<" ";
                    else if(j==a)  cout<<"*";
                }else{
                    check = true;
                    if(j!=0) cout<<" ";
                    else if(j==0) cout<<"*";
                }
            }
            cout<<endl;
        }
    }
}