/**
 *    author: A K M S Limon
 *    created: 16-April-2025  20:51:38
**/
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k, d; cin >> n >> k >> d;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n - k; i++) {
      ans++;
      ans += (d / a[i]);
      if (d % a[i] == 0) {
        ans--;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}