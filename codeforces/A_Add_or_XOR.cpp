/**
 *    author: A K M S Limon
 *    created: 05-July-2025  20:38:53
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int a, b, x, y; cin >> a >> b >> x >> y;
    if (a == b) {
      cout << 0 << '\n';
    }
    else if (a > b) {
      if ((a ^ 1) == b) {
        cout << y << '\n';
      }
      else {
        cout << -1 << '\n';
      }
    }
    else {
      int ans = 0;
      while (a != b) {
        if ((a & 1) == 0) {
          ans += min(x, y);
        }
        else {
          ans += x;
        }
        a++;
      }
      cout << ans << '\n';
    }
  }
  return 0;
}