/**
 *    author: A K M S Limon
 *    created: 08-April-2025  20:37:15
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n % 2) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}