#include <bits/stdc++.h>
using namespace std;
int main(){
	string eded;
	getline(cin, eded);

	string bosluqlar_cixandan_sonra;
	for(int i = 0;i<eded.length();i++){
		if(eded[i]==' '){
			continue;
		}
		char azn = eded[i];
		bosluqlar_cixandan_sonra += azn;
	}
	
	string bosluqlar_cixandan_sonra_ededin_tersi = bosluqlar_cixandan_sonra;
	reverse(bosluqlar_cixandan_sonra_ededin_tersi.begin(), bosluqlar_cixandan_sonra_ededin_tersi.end());
	

	if(bosluqlar_cixandan_sonra == bosluqlar_cixandan_sonra_ededin_tersi){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
