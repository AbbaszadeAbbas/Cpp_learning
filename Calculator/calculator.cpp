#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int result;
    string sign;
    cout<<"Please enter a : ";
    cin>>a;
    cout<<"Please enter b : ";
    cin>>b;
    cout<<"Please enter an operator( + , - , * , /) : ";
    cin>>sign;
    if (sign == "+"){
        result = a + b ;
    }else if(sign == "-"){
        result = a - b ;
    }else if(sign == "*"){
        result = a * b ;
    }else if(sign == "/"){
        result = a / b ;
    }else{
        cout<<"Please enter + , - , * or  / ";
        return 0;
    }
    cout<<"That is you result : ";
    cout<<result;
}
