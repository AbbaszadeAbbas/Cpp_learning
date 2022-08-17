#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	getline(cin, a);
	int say = 0;
	for(int i = 0;i<a.length();i++){
		while(getline(cin, a)){
			if(a[i] != ' '){
				say += 1;
			}else{
				cout<<say;
			}
		}
	}
}
