/**
 *    author: A K M S Limon
 *    created: 24-April-2025  22:02:40
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int b[m];
    for (int i = 0; i < m; i++) {
      cin >> b[i];
    }
    map<int, int> prefix;
    for (int i = 0; i < m; i++) {
      prefix[i] = n;
    }
    int j = 0;
    for (int i = 0; i < m; i++) {
      while (j < n && a[j] < b[i]) {
        j++;
      }
      if (j < n && a[j] >= b[i]) {
        prefix[i] = j;
        j++;
      }
    }
    int ans = INT_MAX;
    map<int, int> suffix;
    for (int i = m - 1; i >= 0; i--) {
      suffix[i] = -1;
    }
    j = n - 1;
    for (int i = m - 1; i >= 0; i--) {
      while (j >= 0 && a[j] < b[i]) {
        j--;
      }
      if (j >= 0 && a[j] >= b[i]) {
        suffix[i] = j;
        j--;
      }
    }
    bool bl = false;
    // for (int i = 0; i < m; i++) {
    //   cout << prefix[i] << " ";
    // }
    // cout << '\n';
    // for (int i = 0; i < m; i++) {
    //   cout << suffix[i] << " ";
    // }
    // cout << '\n';
    if (n == 1) {
      if (a[0] >= b[0]) {
        cout << 0 << '\n';
      }
      else {
        cout << b[0] << '\n';
      }
      continue;
    }
    if (prefix[m - 1] < n) {
      ans = 0;
    }
    else if (prefix[m - 2] < n) {
      ans = min(ans, b[m - 1]);
      bl = true;
    }
    for (int i = m - 1; i >= 0; i--) {
      if (suffix[i] > prefix[i - 1] && i > 0) {
        bl = true;
        ans = 0;
      }
      else if (suffix[i] == prefix[i - 1] && i > 0) {
        ans = min(ans, b[i]);
        ans = min(ans, b[i - 1]);
        bl = true;
      }
      else if (suffix[i] > prefix[i - 2] && i > 1) {
        bl = true;
        ans = min(ans, b[i - 1]);
      }
      else if (i == 1 && suffix[i] == 0) {
        bl = true;
        ans = min(ans, b[i - 1]);
      }
    }
    if (bl)
    cout << ans << endl;
    else cout << -1 << '\n';
  }
  return 0;
}