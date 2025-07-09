/**
 *    author: A K M S Limon
 *    created: 08-July-2025  00:24:12
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    string s;
    for (int i = 0; i < n; i++) {
      s.push_back('0');
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
      mn = min(a[i], mn);
      if (a[i] == mn) {
        s[i] = '1';
      }
    }
    int mx = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
      mx = max(mx, a[i]);
      if (a[i] == mx) {
        s[i] = '1';
      }
    }
    cout << s << '\n';
  }
  return 0;
}