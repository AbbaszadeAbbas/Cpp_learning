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
		}else if(input=="back"){
			cout<<array[array.size()-1]<<endl;
		}else if(input=="size"){
			cout<<array.size()<<endl;
		}else if(input=="pop"){
		    cout<<array[array.size()-1]<<endl;
			array.erase(array.end()-1);
		}else if(input=="clear"){
			array.clear();
			cout<<"ok"<<endl<<endl;
		}else if(input=="exit"){
			cout<<"bye"<<endl;
			return 0;
		} 
	}
}