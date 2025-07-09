/**
 *    author: A K M S Limon
 *    created: 08-July-2025  00:14:33
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, j, k; cin >> n >> j >> k;
    int a[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mx = max(a[i], mx);
    }
    if (mx == a[j - 1]) {
      cout << "YES" << '\n';
    }
    else {
      if (k == 1) {
        cout << "NO" << '\n';
      }
      else {
        cout << "YES" << '\n';
      }
    }
  }
  return 0;
}