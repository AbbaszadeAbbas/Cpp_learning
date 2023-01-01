#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a,b,c,helper,min,max,guess,count = 0;
  cin>>a>>b;
  vector<long long>v1;
  vector<long long>v2;
  for(long long i = 0;i<a;i++){
    cin>>helper;
    v1.push_back(helper);
  }
  for(long long i = 0;i<b;i++){
    cin>>helper;
    v2.push_back(helper);
  }
  min = 0;
  max = a-1;
  for(long long i = 0;i<b;i++){
    while(min<=max){
      guess = (max+min)/2;
      if(v1[guess] <= v2[i]){
        cout<<v1[guess]<<endl;
        v1.erase(v1.begin()+guess);
        count = 1;
        break;
      }else if(v1[min] <= v2[i]){
        cout<<v1[min]<<endl;
        v1.erase(v1.begin()+min);
        count = 1;
        break;
      }else if(v1[max] <= v2[i]){
        cout<<v1[max]<<endl;
        v1.erase(v1.begin()+max);
        count = 1;
        break;
      }else if(v1[guess]<v2[i]){
        min = guess + 1;
      }else{
        max = guess - 1;
      }
    }
    if(count == 0){
      cout<<-1<<endl;
    }
    count = 0;
    min = 0;
    max = a-1;
  }
}
