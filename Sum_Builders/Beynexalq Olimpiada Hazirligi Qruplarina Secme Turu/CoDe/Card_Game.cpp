#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n,counter = 0;
	cin>>n;
	char ch;
	while(n--){
		for(long long i = 0;i<13;i++){
			cin>>ch;
			if(ch == 'A')counter+=4;
			else if(ch == 'K')counter+=3;
			else if(ch == 'Q')counter+=2;
			else if(ch == 'J')counter+=1;
		}
	}
	cout<<counter;
}