/**
 *    author: A K M S Limon
 *    created: 27-March-2025  00:10:31
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(int a[], int ind, int n, int x, int y, ll sum) {
  ll ans = 0;
  ans = max(0ll, y - (sum - a[ind]));
  if (x >= a[ind]) {
    ans += (1ll * x - a[ind]);
  }
  return ans;
}

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    ll sum = accumulate(a, a + n, 0ll);
    int q; cin >> q;
    while (q--) {
      int x, y; cin >> x >> y;
      int ind = lower_bound(a, a + n, x) - a;
      ll ans;
      if (ind == n) {
        ans = solve(a, n - 1, n, x, y, sum);
      }
      else if (ind == 0) {
        ans = solve(a, 0, n, x, y, sum);
      }
      else {
        ans = min(solve(a, ind, n, x, y, sum), solve(a, ind - 1, n, x, y, sum));
      }
      cout << ans << '\n';
    }
  }
  return 0;
}