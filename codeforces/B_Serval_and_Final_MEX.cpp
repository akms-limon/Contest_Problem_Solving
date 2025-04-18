/**
 *    author: A K M S Limon
 *    created: 23-March-2025  22:38:38
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
    bool fbl = false, sbl = false;
    for (int i = 0; i < n / 2; i++) {
      if (a[i] == 0) {
        fbl = true;
      }
    }
    for (int i = n / 2; i < n; i++) {
      if (a[i] == 0) {
        sbl = true;
      }
    }
    int cnt = 1;
    if (sbl) {
      cnt++;
    }
    if (fbl) {
      cnt++;
    }
    cout << cnt << '\n';
    int temp = n, dic = 0;
    if (sbl) {
      cout << n / 2 + 1 << ' ' << n << '\n';
      dic += n - (n / 2 + 1);
    }
    if (fbl) {
      cout << 1 << ' ' << n / 2 << '\n';
      dic += (n / 2) - 1;
    }
    cout << 1 << ' ' << n - dic << '\n';
  }
  return 0;
}