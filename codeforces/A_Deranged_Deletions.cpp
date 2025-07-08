/**
 *    author: A K M S Limon
 *    created: 06-July-2025  20:40:03
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      b[i] = a[i];
    }
    sort(a, a + n);
    vector<int> v;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        v.push_back(b[i]);
      }
    }
    if (!v.empty()) {
      cout << "YES" << '\n';
      cout << v.size() << '\n';
      for (auto it : v) {
        cout << it << ' ';
      }
      cout << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}