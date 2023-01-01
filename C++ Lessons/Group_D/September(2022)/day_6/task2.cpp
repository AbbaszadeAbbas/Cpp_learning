#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<long long>array;
    string input;
    while(cin>>input){
        long long n;
        if(input == "push_front"){
            cin>>n;
            array.push_front(n);
            cout<<"ok"<<endl;
        }
        if(input == "push_back"){
            cin>>n;
            array.push_back(n);
            cout<<"ok"<<endl;
        }
        if(input == "pop_front"){
            if(array.size()>0){
                cout<<array.front()<<endl;
                array.pop_front();
            }else{
                cout<<"error"<<endl;
            }
        }
        if(input == "pop_back"){
            if(array.size()>0){
                cout<<array.back()<<endl;
                array.pop_back();
            }else{
                cout<<"error"<<endl;
            }
        }
        if(input == "front"){
            if(array.size()>0){
                cout<<array.front()<<endl;
            }else{
                cout<<"error"<<endl;
            }
        }
        if(input == "back"){
            if(array.size()>0){
                cout<<array.back()<<endl;
            }else{
                cout<<"error"<<endl;
            }
        }
        if(input == "size"){
            cout<<array.size()<<endl;
        }
        if(input == "clear"){
            array.clear();
            cout<<"ok"<<endl;
        }
        if(input == "exit"){
            cout<<"bye"<<endl;
            return 0;
        }
    }
}