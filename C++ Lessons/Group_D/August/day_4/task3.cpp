#include <bits/stdc++.h>
using namespace std;
int main() {
	string a;
	getline (cin,a);
	sort(a.begin(), a.end());
	cout<<a<<endl;
	for(int i = a.length()-1;i>=0;i--){
		cout<<a[i];
	}
}
