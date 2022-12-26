#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,z=0,k=0,f=0;
	string a,b,c;
	vector<long long>helper1,helper2;
	vector<string>s;
    cin>>n;
    if(n==2){
        cout<<"1 1"<<endl;
        cout<<1<<endl<<2;
        return 0;
    }
    if(n%2==0){
        for(long long i=0;i<n;i++){
           z=z+1;
            if(i%2==0){
                if(k%2==0) helper1.push_back(z);
                else helper2.push_back(z);
                k=k+1;
            }
            else{
                if(f%2==0) helper2.push_back(z);
                else helper1.push_back(z);
                f=f+1;
            }
        }
    }
    else{
        helper1.push_back(1);
        helper1.push_back(2);
        helper2.push_back(3);
        z=3;
        for(long long i=0;i<n-3;i++){
           z=z+1;
            if(i%2==0){
                if(k%2==0)helper1.push_back(z);
                else helper2.push_back(z);

                k=k+1;
            }
            else{
                if(f%2==0) helper2.push_back(z);
                else helper1.push_back(z);
                f=f+1;
            }
            
        }
    }
    cout<<helper1.size()<<" "<<helper2.size()<<endl;
    for(long long i=0;i<helper1.size();i++){
        cout<<helper1[i]<<" ";
    }
    cout<<endl;
    for(long long i=0;i<helper2.size();i++){
        cout<<helper2[i]<<" ";
    }
}