#include<iostream>
#define MAXIMUM 1000000
using namespace std; 
int main () {
    long long a;
    cin>>a;
    for(long long i = 1;i<MAXIMUM;i++){
        if(a%i == 0){
            if(i == 1){
                
            }
            cout<<a/i;
            return 0;
        } 
    }
}