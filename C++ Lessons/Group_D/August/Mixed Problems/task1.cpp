#include <bits/stdc++.h>
using namespace std;
int main() {
	double a,b;
	cin>>a>>b;
	if(a>0 && b>0){
		cout<<1;
	}else if(a>0 && b<0){
		cout<<4;
	}else if(a<0 && b>0){
		cout<<2;
	}else if(a<0 && b<0){
		cout<<3;
	}else{
		cout<<0;
	}
}
