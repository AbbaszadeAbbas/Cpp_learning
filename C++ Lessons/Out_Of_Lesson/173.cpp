#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  set < long long > st;
  vector < long long > arr(n, 0), ans;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  reverse(arr.begin(), arr.end());
  for (int i = 0; i < n; i++){
    if (!st.count(arr[i])) {
      st.insert(arr[i]);
      ans.push_back(arr[i]);
    }
  }
  reverse(ans.begin(), ans.end());
  for (auto a: ans){
    cout << a << " ";
  }
  cout << endl;
}