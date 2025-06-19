/**
 *    author: A K M S Limon
 *    created: 01-May-2025  15:36:22
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 5;
int n, m;
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

  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    if (!vis[i]) {
      ans.push_back(i);
      dfs(i);
    }
  }
  cout << ans.size() - 1 << "\n";
  for (int i = 0; i < ans.size() - 1; i++) {
    cout << ans[i] << " " << ans[i + 1] << "\n";
  }
  return 0;
}