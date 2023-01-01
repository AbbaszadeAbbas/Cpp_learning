#include <bits/stdc++.h>
using namespace std;
int main() {
	long long a,b;
	cin>>a>>b;
	long long n[a],m[b];
	for(int i = 0;i<a;i++){
		cin>>n[i];
	}
	for(int i = 0;i<b;i++){
		cin>>m[i];
	}
	for(int i = 0 ; i < b; i++){
		for(int j = 0;j < a;j++){
			if(m[i] != n[j]){
				cout<<"NO"<<endl;
				break;
			}else if(m[i] == n[j]){
				cout<<"YES"<<endl;
				break;
			}
		}
	}
}                                                                                                             
