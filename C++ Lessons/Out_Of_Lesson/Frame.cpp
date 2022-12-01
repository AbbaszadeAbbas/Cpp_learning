#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    for(long long i = 0;i<a;i++)cout<<"*";
    cout<<endl;
    cout<<"*";
    for(long long i = 0;i<a-2;i++)cout<<" ";
    cout<<"*";
    cout<<endl;
    for(long long i = 0;i<a;i++)cout<<"*";
}