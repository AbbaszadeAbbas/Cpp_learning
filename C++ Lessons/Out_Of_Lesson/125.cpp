#include <iostream>
using namespace std;
int main() { 
    string n;
    long sum=1; 
    cin>>n;
    for(long i=0;i<n.size();i++){
        if(stoi(n.substr(i,1))%2!=0 ){
            sum*=stoi(n.substr(i,1));
        }
    }
    if(sum==1){
    cout<<-1;  
    }else{
    cout<<sum;
    }
}