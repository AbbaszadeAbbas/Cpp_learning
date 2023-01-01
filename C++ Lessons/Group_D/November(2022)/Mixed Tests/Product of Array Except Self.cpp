#include<iostream>
using namespace std;
int main(){ 
    int n,z=1,y,z2 = 1;
    cin>>n;
    int check = 0;
    long long a[n];
    for(int i=0;i<n;i++){ 
        cin>>a[i];
        if(a[i] == 0){
            check ++;
        }else if(a[i] != 0){
            z2*=a[i];
        }
        z *= a[i];
    }
    for(long long i = 0;i<n;i++){
        if(check == 0){
            cout<<z/a[i]<<" ";
        }else if(check > 0){
            if(a[i] != 0){
                cout<<0<<" ";
            }else if(a[i] == 0 && check == 1){
                cout<<z2<<" ";
            }else{
                cout<<0<<" ";
            }
        }
    }
    
}