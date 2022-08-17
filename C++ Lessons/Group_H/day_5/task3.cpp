#include <bits/stdc++.h>
using namespace std;
int main() {
	long long a;
	cin>>a;
	abs(a);
	long long first = a/100;
	long long second = a/10%10;
	long long third = a%10;
	cout<<abs(first + second + third);
}
