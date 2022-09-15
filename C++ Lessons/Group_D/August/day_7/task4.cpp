#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n,say = 0;
	cin>>n;
	long long a[n];
	for(long long i = 0; i < n; i++){
		cin>>a[i];
	}
  long long first_element = a[0];
  for(long long i = 0; i<n-1; i++){
		for(long long j = 0; j<n-1; j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
        if(first_element != a[0]){
          say +=1;
        }
			}
		}
	}
  cout<<say;
}