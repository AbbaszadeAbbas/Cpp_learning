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
            cout<<array.front()<<endl;
            array.pop_front();
        }
        if(input == "pop_back"){
            cout<<array.back()<<endl;
            array.pop_back();
        }
        if(input == "front"){
            cout<<array.front()<<endl;
        }
        if(input == "back"){
            cout<<array.back()<<endl;
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