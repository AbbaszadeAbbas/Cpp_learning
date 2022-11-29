#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size,x,y,z,result;
    cin>>size;
    for(long long i = 0;i<size;i++) {   
        cin>>x>>y>>z;
        result = ((x+y)*z)/8;
        if(((x+y)*z)%8 != 0){
            result++;
        }
        cout<<result<<endl;
    }
}