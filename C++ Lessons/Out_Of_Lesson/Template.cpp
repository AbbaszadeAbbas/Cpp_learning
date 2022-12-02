#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a;
    cin>>a;
    for(long long hundurluk = 0;hundurluk<a;hundurluk++){
        for(long long en = 0;en<a;en++){
            if((hundurluk%2==0 and en%2==0)or(hundurluk%2==1 and en%2==1))cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}