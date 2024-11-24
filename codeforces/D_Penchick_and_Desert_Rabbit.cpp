/**
 *    author: A K M S Limon
 *    created: 16-November-2024  01:21:04
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
    int pre[n], post[n];
    pre[0] = a[0], post[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++) {
      pre[i] = max(a[i], pre[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--) {
      post[i] = min(post[i + 1], a[i]);
    }
    int ans[n];
    ans[n - 1] = pre[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      if (pre[i] > post[i + 1]) {
        ans[i] = ans[i + 1];
      }
      else {
        ans[i] = pre[i];
      }
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}