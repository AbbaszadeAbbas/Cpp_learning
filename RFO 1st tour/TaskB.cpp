#include <bits/stdc++.h>
using namespace std;
int main(){
	long long num,counter1=0,counter2=0,counter3=0;
	vector<long long>helper1,helper2;
	vector<string>s;
    cin>>num;
    if(num==2) cout<<1<<" "<<1<<endl<<1<<endl<<2; return 0;
    
    if(num%2==0){
        for(long long i=0;i<num;i++){
           counter1+=1;
            if(i%2==0){
                if(counter2%2==0) helper1.push_back(counter1);
                else helper2.push_back(counter1);
                counter2+=1;
            }
            else{
                if(counter3%2==0) helper2.push_back(counter1);
                else helper1.push_back(counter1);
                counter3+=1;
            }
        }
    }
    else{
        helper1.push_back(1);
        helper1.push_back(2);
        helper2.push_back(3);
        counter1=3;
        for(long long i=0;i<num-3;i++){
           counter1+=1;
            if(i%2==0){
                if(counter2%2==0)helper1.push_back(counter1);
                else helper2.push_back(counter1);

                counter2+=1;
            }
            else{
                if(counter3%2==0) helper2.push_back(counter1);
                else helper1.push_back(counter1);
                counter3+=1;
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