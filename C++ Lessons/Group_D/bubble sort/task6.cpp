#include <bits/stdc++.h>
using namespace std;
int main() {
	long long use,count = 0;
  int n;
	cin>>n;
	long long  a[n];
	for(long long i = 0; i < n; i++){
		cin>>a[i];
	}
	for(long long i = 0; i < n - 1; i++){
		for(long long j = 0; j < n - 1; j++){
      use = a[j];
			if(a[j] > a[j+1]){
				swap(a[j], a[j+1]);
        if(a[j] != use){
          count+=1;
        }
			}else if(a[j] == a[j+1] || a[j] < a[j+1]){
        continue;
      }
		}
	}
  cout<<count;
}