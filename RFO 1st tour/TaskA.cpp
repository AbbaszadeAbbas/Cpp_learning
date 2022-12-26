#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    long long counter=1,maximum=0;
    getline(cin,s);
    for(long long i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            if(counter>maximum) maximum=counter;

            counter=1;
        }else{
            counter++;
            if(counter>maximum) maximum=counter;
        }
    }
    cout<<maximum;
}