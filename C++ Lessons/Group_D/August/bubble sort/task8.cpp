#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  long long numbers[n];
  for(int i = 0; i < n; i++){
    cin>>numbers[i];
  }

  for(long long i = 0; i < n-1;i++){
		for(long long j = 0; j < n-1;j++){
      if(numbers[j]%10 > numbers[j+1]%10){
        swap(numbers[j], numbers[j+1]);
      }else if(numbers[j]%10 == numbers[j+1]%10 && numbers[j]>numbers[j+1]){
        swap(numbers[j], numbers[j+1]);
      }
		}
	}
	for(long long i = 0;i < n; i++){
		cout<<numbers[i]<<" ";
	}
}