#include <bits/stdc++.h>
using namespace std;
int main() {
  long long helper,G = 0;
  vector<long long>v;
  while(helper != 0){
	cin>>helper;
	if(helper != 0){
		v.push_back(helper);
	}
  }
  for(long long i = 0;i<v.size();i++){
	for(long long x = 1;x<v[i];x++){
		for(long long y = x+1;y<=v[i];y++){
			G+=__gcd(x, y);
		}
	}
	cout<<G<<endl;
	G = 0;
  }
}