#include <bits/stdc++.h>
using namespace std;
int main() {
	long long x,a,b;
	cin>>x>>a>>b;
	for(long long i = a;i<b+1;i++){
		if(x==a || x==b){
			cout<<"IN";
			break;
		}else if(i/x!=0 || x!=a || x!=b){
			cout<<"OUT";
			break;
		}else if(i/x==0){
			cout<<"IN";
			break;
		}
	}
}
