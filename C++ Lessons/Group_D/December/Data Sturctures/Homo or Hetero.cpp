#include <bits/stdc++.h>
using namespace std;
int main() {
    long long size,helper,homo = 0, hetero = 0;
    string s;
    cin>>size;
    map<long long, long long>m;
    for(long long i = 0;i<size;i++){
        homo = 0; 
        hetero = 0;
        cin>>s>>helper;
        if     (s == "insert"){    m[helper]++;    }
        else if(s == "delete"){    m[helper]--;    }

        for(auto x:m){
            if(m.size() == 1 and x.second>1){    cout<<"homo"<<endl;    }
            else if(m.size() > 1){
                if(x.second == 1){  hetero++; }
                if(x.second > 1){   homo++;   }
            }
        }
        if(homo == 0 and hetero > 1){  cout<<"hetero"<<endl;  }
        if(homo > 0 and hetero <= 0){  cout<<"homo"<<endl;    }
        else if(homo > 0 and hetero > 0) {  cout<<"both"<<endl;   }
        else{cout<<"neither"<<endl;}
    }
}