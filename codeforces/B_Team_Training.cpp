/**
 *    author: A K M S Limon
 *    created: 25-March-2025  21:06:01
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    ll n, x; cin >> n >> x;
    ll a[n];
    for (ll i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
      ll cnt = 1;
      ll strength = cnt * a[i];
      while (strength < x && i < n) {
        cnt++;
        i++;
        if (i < n)
        strength = cnt * a[i];
      }
      if (strength >= x) {
        ans++;
      }
    }
    cout << ans << '\n';
  }
  return 0;
}