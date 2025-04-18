/**
 *    author: A K M S Limon
 *    created: 16-April-2025  21:16:26
 **/
#include <bits/stdc++.h>

#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n = 3;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
      vector < int > v;
      for (int j = 0; j < n; j++) {
        if (j != i) {
          v.push_back(a[j]);
        }
      }
      int bijor = 0;
      for (int j = 0; j < v.size(); j++) {
        if (v[j] % 2) {
          bijor++;
        }
      }
      if (bijor == 2) {
        ans = min(ans, v[0] + v[1] - 1);
      }
      else {
        ans = min(ans, v[0] + v[1]);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}