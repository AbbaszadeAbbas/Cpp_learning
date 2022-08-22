#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin>>n;
	long long hour[n], minute[n], second [n];
	for(long long i = 0;i <n; i++){
		cin>>hour[i]>>minute[i]>>second[i];
	}

	for(long long i = 0; i < n-1;i++){
		for(long long j = 0; j < n-1;j++){
			if(hour[j] > hour[j+1]){
				swap(hour[j], hour[j+1]);
				swap(minute[j], minute[j+1]);
				swap(second[j], second[j+1]);
			}else if(hour[j] == hour[j+1] && minute[j]>minute[j+1]){
				swap(minute[j], minute[j+1]);
				swap(second[j], second[j+1]);
			}else if(hour[j]==hour[j+1] && minute[j] == minute[j+1] && second[j] > second[j+1]){
				swap(second[j], second[j+1]);
			}else{
				continue;
			}
		}
	}
	for(long long i = 0;i < n; i++){
		cout<<hour[i]<< " " << minute[i]<<" "<<second[i]<<endl;
	}
}
