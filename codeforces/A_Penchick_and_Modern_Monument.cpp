/**
 *    author: A K M S Limon
 *    created: 15-November-2024  18:37:30
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
    }
    int mx = 0;
    for (auto it : mp) {
      mx = max(mx, it.second);
    }
    cout << n - mx << '\n';
  }
  return 0;
}