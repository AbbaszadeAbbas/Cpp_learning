#include <bits/stdc++.h>
using namespace std;
int main() {
  long long size, num1, num2, gcd;
  cin>>size;
  long long arr[size];
  for(long long i = 0;i<size;i++){
  	cin>>arr[i];
  	if(i == 0)gcd = arr[i];
		else gcd = __gcd(gcd, arr[i]);
	}
	cout<<gcd;
}