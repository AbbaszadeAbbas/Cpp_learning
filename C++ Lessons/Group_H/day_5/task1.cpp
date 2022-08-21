#include <bits/stdc++.h>
using namespace std;

int main(){
    long long s, sum = 0, gun = 0, evvelki = 0;
  	cin>>s;
  	while(sum < s){
  		gun++;
		evvelki = 2*evvelki + gun;
		sum += evvelki;
	}
	cout<<gun<<endl;
}
