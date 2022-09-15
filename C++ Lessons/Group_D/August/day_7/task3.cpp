#include <bits/stdc++.h>
using namespace std;
int main() {
  int say = 0;
  long long n;
  cin>>n;
  long long a[n];
  for(long long i = 0; i<n;i++){
    cin>>a[i];
  }
  sort(a, a+n);
	for(int i = 0;i<n;i++){
		if(a[i] != a[i+1]){
      say +=1;
		}
	}
  long long total[n] = {};
  sort(a, a+n);
	for(int i = 0;i<n;i++){
		if(a[i] != a[i+1]){
      say +=1;
			total[i] = a[i];
		}
	}
  for(long long  i = 0;i<say;i++){
    if(total[i]!= 0 && n%2!=0){
			cout<<total[i]<<endl;
		}
  }
  for(long long i = say;i>0;i--){
    if(total[i]!= 0 && n%2==0){
			cout<<total[i]<<endl;
		}
  }
}
