/**
 *    author: A K M S Limon
 *    created: 19-April-2025  19:34:18
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, m; cin >> n >> m;
  vector<set<int>> dish(m);
  map<int, set<int>> who;
  for (int i = 0; i < m; i++) {
    int x; cin >> x;
    for (int j = 0; j < x; j++) {
      int a; cin >> a;
      who[a].insert(i);
      dish[i].insert(a);
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    for (auto &id : who[x]) {
      dish[id].erase(x);
      if (dish[id].empty()) {
        ans += 1;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}