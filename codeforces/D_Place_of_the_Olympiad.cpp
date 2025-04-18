/**
 *    author: A K M S Limon
 *    created: 25-March-2025  22:43:45
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    ll n, m, k; cin >> n >> m >> k;
    ll col_need = (k + n - 1) / n;
    ll extra_col = m - col_need;
    ll ans = col_need;
    if (extra_col) {
      ans = (col_need + extra_col) / (extra_col + 1);
    }
    cout << ans << endl;
  }
  return 0;
}