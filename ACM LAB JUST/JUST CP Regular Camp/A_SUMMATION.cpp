/**
 *    author: A K M S Limon
 *    created: 01-May-2025  11:45:43
**/
#include <bits/stdc++.h>
#define ll long long
#define mod 100000007
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  int cs = 1;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    ll ans = 0;
    ll mult = 1;
    for (int i = 0; i < n; i++) {
      mult *= 2;
      mult %= mod;
    }
    mult /= 2;
    for (int i = 0; i < n; i++) {
      ans += (a[i] % mod * mult) % mod;
      ans %= mod;
    }
    cout << "Case " << cs++ << ": " << ans << '\n';
  }
  return 0;
}