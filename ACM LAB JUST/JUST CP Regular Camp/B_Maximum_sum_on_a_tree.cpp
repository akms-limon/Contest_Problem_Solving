/**
 *    author: A K M S Limon
 *    created: 01-May-2025  16:10:09
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
vector<int> vis(N, 0);

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  for (int i = 1; i < n; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<pair<int, int>> v;
  for (int i = 1; i <= n; i++) {
    int value; cin >> value;
    v.push_back({value, i});
  }
  ll ans = 0;
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    int par = v[i].second;
    if (vis[par]) continue;
    vis[par] = 1;
    ans += v[i].first;
    for (auto child : g[par]) {
      vis[child] = 1;
    }
  }
  cout << ans << '\n';
  return 0;
}