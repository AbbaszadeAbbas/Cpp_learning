#include <iostream>
using namespace std;
int main() {
    long long size,helper;
    cin>>size;
    for(long long i = 0;i<size;i++){
        cin>>helper;
        if(helper%3 == 0) cout<<"GCV"<<endl;
        else if(helper%3 == 1) cout<<"VGC"<<endl;
        else cout<<"CVG"<<endl;
    }
}