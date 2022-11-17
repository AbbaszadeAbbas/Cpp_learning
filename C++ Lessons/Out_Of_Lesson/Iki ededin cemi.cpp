#include <bits/stdc++.h>
using namespace std;
int main(){
    long long size;
    cin>>size;
    long long arr[size][2];
    for(long long i = 0;i<size;i++){
        for(long long j = 0;j<2;j++){
            cin>>arr[i][j];
        }
    }
    for(long long i = 0;i<size;i++){
        cout<<arr[i][0]+arr[i][1]<<endl;
    }
}