/**
 *    author: A K M S Limon
 *    created: 05-April-2025  20:54:15
**/
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    int mn = LONG_LONG_MAX;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mn = min(mn, a[i]);
    }
    int gcd = 0;
    sort(a, a + n);
    for (int i = 1; i < n; i++) {
      if (a[i] % mn == 0) {
        gcd = __gcd(gcd, a[i]);
      }
    }
    if (gcd == mn) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}