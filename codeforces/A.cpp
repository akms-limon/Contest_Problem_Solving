/**
 *  Author: AhSaN (JUST-22)
 *  Created: 07-10-2024  15:40:37
**/
#include <bits/stdc++.h>

#pragma GCC optimize("Ofast")
using namespace std;

#ifndef ONLINE_JUDGE
#else
#define dbg(...)
#define dbgA(...)
#endif

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> OMS;

#define int int64_t

void Sol(int Cs) {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  OMS P, C;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'C') C.insert(a[i]);
  }
  int64_t res = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'P') {
      P.insert(a[i]);
    } else {
      C.erase(C.find_by_order(C.order_of_key(a[i])));
      int cnt = int(C.size()) - C.order_of_key(a[i] + 1);
      if (P.size() <= cnt) {
        res += a[i] * 1LL * *P.begin();
        P.erase(P.begin());
      } else {
        res += a[i] * 1LL * (*P.find_by_order(P.size() - cnt - 1));
        P.erase(P.find_by_order(P.order_of_key(*P.find_by_order(P.size() - cnt - 1))));
      }
    }
  }
  cout << res << "\n";
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int Tc = 1;
  cin >> Tc;
  for (int Cs = 1; Cs <= Tc; Cs++) {
    Sol(Cs);
  }
  return 0;
}