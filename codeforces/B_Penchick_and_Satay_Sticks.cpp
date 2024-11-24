/**
 *    author: A K M S Limon
 *    created: 15-November-2024  18:57:12
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
      if (a[i] > a[i + 1] && a[i] - a[i + 1] == 1) {
        swap(a[i], a[i + 1]);
      }
    }
    bool bl = true;
    for (int i = 0; i < n; i++) {
      if (a[i] != i + 1) {
        bl = false;
        break;
      }
    }
    if (bl) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}