#include <bits/stdc++.h>
using namespace std;
int main() {
	set<long long>s;
	long long a,helper;
	cin>>a;
	for(long long i = 0;i<a;i++){
        cin>>helper;
        s.insert(helper);
    }
    if(a%2 == 0){
        for (auto rit = s.rbegin(); rit != s.rend(); rit++){
            cout << *rit<<endl;
        }
    }else if(a%2 == 1){
        for (auto rit = s.begin(); rit != s.end(); rit++){
            cout << *rit<<endl;
        }
    }
}