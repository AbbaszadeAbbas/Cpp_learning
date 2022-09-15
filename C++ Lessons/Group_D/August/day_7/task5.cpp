// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   long long a[100000],n;
//   cin>>n;
//   for(long long i = 0; i<n;i++){
//     cin>>a[i];
//   }
//   sort(a, a+n);
//   for(long i = 0;i<n;i++){
//     cout<<a[i]<<" ";
//   }
// }


#include <bits/stdc++.h>
using namespace std;
int main() {
  int say[100001] = {0
  };
  int n;
  cin >> n;
  int a[n], ans[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    say[a[i]]++;
  }
  for (int i = 1; i <= 100000; i++) {
    say[i] += say[i - 1];
  }
  for (int i = 0; i < n; i++) {
    ans[say[a[i]] - 1] = a[i];
    say[a[i]]--;
  }
  for (int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
}