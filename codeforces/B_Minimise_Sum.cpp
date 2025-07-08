/**
 *    author: A K M S Limon
 *    created: 06-July-2025  20:52:29
**/
#include <bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n], mn[n], pre_sum[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mn[i] = a[i];
    }
    pre_sum[0] = mn[0];
    for (int i = 1; i < n; i++) {
      mn[i] = min(mn[i - 1], a[i]);
      pre_sum[i] = pre_sum[i - 1] + mn[i];
    }
    ll ans = min(pre_sum[n - 1], a[0] + a[1]);
    for (int i = n - 1; i > 1; i--) {
      int temp = a[i] + a[i - 1];
      ans = min(ans, pre_sum[i - 2] + min(temp, mn[i - 2]));
    }
    cout << ans << '\n';
  }
  return 0;
}