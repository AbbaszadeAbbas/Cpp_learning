#include <bits/stdc++.h>
using namespace std;
int main() {
	long long a,b,c;
	cin>>a>>b>>c;
	long long D = b*b+(-4*a*c);
	if(D>0){
		long long first = (-1 * b + sqrt(D))/(2*a);
		long long second = (-1 * b - sqrt(D))/(2*a);
		long long max_element = max(first, second);
		long long min_element = min(first, second);
		cout<<"Two roots: "<<min_element<<" "<<max_element;
	}else if(D==0){
		long long only_element = (-1 * b) /2;
		cout<<"One root: "<<only_element;
	}else{
		cout<<"No roots";
	}
}
