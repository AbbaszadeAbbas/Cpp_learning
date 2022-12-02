#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,counter = -1,helper = 0;
    cin>>a;
    if(a==3){
        counter = 1;
    }else if(a==6){
        cout<<2;
    }
    if(a>7){
        counter = 0;
        while(a>=5){
            a = a - 5;
            counter++;
        }
        a = a%5;
        if(a==3)  counter++;
        if(a==4)  counter+=2;
        if(a==2)  counter+=2;
        if(a==1)  counter++;
    }
    cout<<counter;
}