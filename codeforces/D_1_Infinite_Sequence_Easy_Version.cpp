/**
 *    author: A K M S Limon
 *    created: 28-February-50250  22:17:504
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, l, r; cin >> n >> l >> r;
    int a[n];
    int b[n * 50];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    while (l > n) {
      l /= 2;
    }
    int xr = 0;
    for (int i = 0; i < l; i++) {
      xr ^= a[i];
    }
    // cout << xr << endl;
    for (int i = 0; i < n; i++) {
      b[i] = a[i];
    }
    for (int i = n; i < n * 50; i++) {
      int xr = 0;
      for (int j = 0; j < i / 2; j++) {
        xr ^= b[j];
      }
      b[i] = xr;
    }
    for (int i = 0; i < n * 50; i++) {
      cout << b[i] << ' ';
    }
    cout << '\n';
    while (r > n * 50) {
      r /= 2;
    }
    cout << b[r - 1] << '\n';
  }
  return 0;
}