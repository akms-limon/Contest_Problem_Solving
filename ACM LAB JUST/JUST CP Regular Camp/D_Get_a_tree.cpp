/**
 *    author: A K M S Limon
 *    created: 01-May-2025  12:46:13
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
const int N = 110;
vector<int> g[N];
vector<pair<int,int>>ans;
vector<int> vis(N, 0);

void dfs(int u) {
  vis[u] = 1;
  for (auto v : g[u]) {
    if (vis[v] == 0) {
      ans.push_back({u, v});
      dfs(v);
    }
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  cin >> n >> m;
  vector<int> a;
  for (int i = 0; i < m; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(1);
  for(auto &[u,v]:ans){
    cout << u << " " << v << "\n";
  }
  return 0;
}