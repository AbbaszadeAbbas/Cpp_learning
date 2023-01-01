#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, ans = 0;
  cin>>n;
  ans += (n/100)*100;
	n = n % 100;
	if( n > 65 ){ans += 100;}
	else{
		ans += (n/20)*30;
		n = n % 20;
		if( n > 15 ){ans += 30;}
		else{ans += n*2;}
	}
	cout<<ans<<endl;
}