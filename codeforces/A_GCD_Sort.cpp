/**
 *    author: A K M S Limon
 *    created: 16-November-2024  11:33:26
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n + 1];
    vector<int> ind(n + 1);
    for (int i = 1; i <= n; i++)  {
      cin >> a[i];
      ind[a[i]] = i;
    }
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++) {
      if (a[i] != i) {
        int x = 1, y = a[i];
        ans.push_back(make_pair(ind[x], ind[y]));
        swap(a[ind[x]], a[ind[y]]);
        swap(ind[x], ind[y]);
        ans.push_back({ind[x], ind[i]});
        swap(a[ind[x]], a[ind[i]]);
        swap(ind[x], ind[i]);
      }
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i].first << ' ' << ans[i].second << '\n';
    }
  }
  return 0;
}