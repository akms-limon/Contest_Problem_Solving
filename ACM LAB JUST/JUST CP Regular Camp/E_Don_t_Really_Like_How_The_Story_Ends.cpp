/**
 *    author: A K M S Limon
 *    created: 01-May-2025  12:06:24
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;
vector<int> g[N];
vector<int> vis(N, 0);

void dfs(int u) {
  vis[u] = 1;
  for (auto v : g[u]) {
    if (!vis[v]) {
      dfs(v);
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
      int u, v; cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    int total_components = 0;
    for (int i = 1; i <= n; i++) {
      if (!vis[i]) {
        total_components++;
        dfs(i);
      }
    }
    for (int i = 1; i <= n; i++) {
      g[i].clear();
      vis[i] = 0;
    }
    cout << total_components - 1;;
    if (t != 0) {
      cout << '\n';
    }
  }
  return 0;
}