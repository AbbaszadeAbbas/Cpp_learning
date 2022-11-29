#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size,x,y,z,result;
    cin>>size;
    for(long long i = 0;i<size;i++) {   
        cin>>x>>y>>z;
        result = (((x*z)*2)+((y*z)*2))/16;
        if(result > 1){
            cout<<result<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}