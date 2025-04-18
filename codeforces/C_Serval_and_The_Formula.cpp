/**
 *    author: A K M S Limon
 *    created: 24-March-2025  00:36:49
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int a, b; cin >> a >> b;
    int temp = (1LL << 40);
    if (a == b) {
      cout << -1 << '\n';
    }
    else {
      cout << temp - max(a, b) << '\n';
    }
  }
  return 0;
}