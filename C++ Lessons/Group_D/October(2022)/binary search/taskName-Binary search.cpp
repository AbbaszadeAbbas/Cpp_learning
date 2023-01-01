#include <bits/stdc++.h>
using namespace std;
int main(){
  long long first_array_size;
  cin>>first_array_size;
  long long second_array_size;
  cin>>second_array_size;
  long long helper;
  vector<long long>first_array;
  vector<long long>second_array;
  for(long long i = 0;i<first_array_size;i++){
    cin>>helper;
    first_array.push_back(helper);
  }
  for(long long i = 0;i<second_array_size;i++){
    cin>>helper;
    second_array.push_back(helper);
  }
  long long guess;
  long long min = 0;
  long long max = first_array_size-1;
  long long count = 0;
  for(long long i = 0;i<second_array_size;i++){
    while(min<=max){
      guess = (max+min)/2;
      if(first_array[guess] == second_array[i]){
        cout<<"YES"<<endl;
        count = 1;
        break;
      }else if(first_array[min] == second_array[i]){
        cout<<"YES"<<endl;
        count = 1;
        break;
      }else if(first_array[max] == second_array[i]){
        cout<<"YES"<<endl;
        count = 1;
        break;
      }else if(first_array[guess]<second_array[i]){
        min = guess + 1;
      }else if(first_array[guess]>second_array[i]){
        max = guess - 1;
      }
    }
    if(count == 0){
      cout<<"NO"<<endl;
    }
    count = 0;
    min = 0;
    max = first_array_size-1;
  }
}