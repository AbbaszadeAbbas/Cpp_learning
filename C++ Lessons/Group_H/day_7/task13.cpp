#include <bits/stdc++.h>

using namespace std;
int main() {
  long long n;
  cin >> n;
  long long a[n + 2];
  for (long long i = 0; i < n; i++) {
    cin >> a[i];
  }
  long long say = 0, max = a[0], max_index = 0;
  for (long long i = 1; i < n; i++) {
    if (a[i] > max) {
      say += 1;
      max = a[i];
      max_index = i;
      for (int i = 0; i < say + 1; i++) {
        swap()
      }
    }
  }
  for (long long i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}