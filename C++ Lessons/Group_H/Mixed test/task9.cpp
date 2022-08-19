#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	int first = a/100;
	int last = a%10;
	if(first != last){
		cout<<max(first, last);
	}else{
		cout<<"=";
	}
}
