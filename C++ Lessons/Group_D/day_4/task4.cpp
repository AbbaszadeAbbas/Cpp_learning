#include <bits/stdc++.h>
using namespace std;

int main(){
    string press_to_enter, result = "";
    getline(cin, press_to_enter);
    for(int i = 0; i < press_to_enter.length(); i++){
        if(press_to_enter[i] != 'a'){
            result = result + press_to_enter[i];
        }
    }
    cout<<result<<endl;
}