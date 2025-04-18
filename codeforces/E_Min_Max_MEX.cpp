/**
 *    author: A K M S Limon
 *    created: 08-April-2025  21:29:18
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int a[n], b[n];
    int zero = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      b[i] = a[i];
      if (a[i] == 0) {
        zero++;
      }
    }
    sort(b, b + n);
    int lo = 0, hi = n - 1;
    while (lo < hi) {
      int mid = (lo + hi + 1) / 2;
      int cur = b[mid];
      int cnt = 0;
      set<int> s;
      for (int i = 0; i < n; i++) {
        if (a[i] <= cur) {
          s.insert(a[i]);
        }
        if (s.size() ==  cur + 1) {
          cnt++;
          s.clear();
        }
      }
      if (cnt >= k) {
        lo = mid;
      }
      else {
        hi = mid - 1;
      }
    }
    if (zero < k) {
      cout << 0 << '\n';
      continue;
    }
    cout << b[lo] + 1 << '\n';
  }
  return 0;
}