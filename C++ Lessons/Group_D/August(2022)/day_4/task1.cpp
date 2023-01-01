#include <bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin, input);
    for(int i = 0; i < input.length(); i++){
        if(input[i] >= 'A' && input[i] <= 'Z'){
            input[i] = tolower(input[i]);
        }
        else if(input[i] >= 'a' && input[i] <= 'z'){
            input[i] = toupper(input[i]);
        }
    }
    cout<<input<<endl;
}