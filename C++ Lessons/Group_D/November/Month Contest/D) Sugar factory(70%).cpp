#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,counter = -1,helper = 0;
    cin>>a;
    if(a%3 == 0 or a%5 == 0 or a%2 == 0 and a>=5){
        counter = 0;
        while(a>=5){
            a = a - 5;
            counter++;
        }
        a = a%5;
        if(a==3)  counter++;
        if(a==4)  counter+=2;
        if(a==2)  counter+=2;
        if(a==1)  counter+=3;
    }
    cout<<counter;
}