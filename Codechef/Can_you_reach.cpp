/**
 *    author: A K M S Limon
 *    created: 26-March-2025  21:46:52
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }
    int prev = 0, cnt = 1, ans = 0, it = 0;
    for (int i = 0; i < n - 1; i++) {
      if (a[i] == a[i + 1]) {
        i++;
        prev = 0;
      }
      else if (a[i] > a[i + 1]) {
        cnt = 1;
        while (a[i] > a[i + 1] && i < n - 1) {
          i++;
          cnt++;
        }
      }
      else {
        cnt = 1;
        while (a[i] < a[i + 1] && i < n - 1) {
          i++;
          cnt++;
        }
      }
      // cerr << prev << ' ' << cnt << '\n';
      if (prev) {
        ans += ((cnt - 1) * (cnt - 2)) / 2;
      }
      else {
        ans += (cnt * (cnt - 1)) / 2;
      }
      ans += ((cnt - 1) * prev);
      prev = cnt;
      i--;
    }
    cout << ans << '\n';
  }
  return 0;
}