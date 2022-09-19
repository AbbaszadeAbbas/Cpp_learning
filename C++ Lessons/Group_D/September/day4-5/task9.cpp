#include <bits/stdc++.h>
using namespace std;
int main(){
	char char_helper;
	string input,helper;
	int num ;
	vector<long long>array;
	while(cin>>input){
		if(input=="push"){
            cin>>num;
            array.push_back(num);
            cout<<"ok"<<endl;
		}else if(input=="front"){
			cout<<array[0]<<endl;
		}else if(input=="size"){
			cout<<array.size()<<endl;
		}else if(input=="pop"){
		    long long ilk = array[0];
			array.erase(array.begin());
			cout<<ilk<<endl;
		}else if(input=="clear"){
			array.clear();
			cout<<"ok"<<endl;
		}else if(input=="exit"){
			cout<<"bye"<<endl;
			return 0;
		} 
	}
}