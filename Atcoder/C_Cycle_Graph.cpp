/**
 *    author: A K M S Limon
 *    created: 03-May-2025  18:20:52
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e5 + 10;
vector<int> g[N];
int col[N];
bool cycle;

void dfs(int u) {
  col[u] = 1;
  for (auto v : g[u]) {
    if (col[v] == 0) dfs(v);
    else if (col[v] == 1) {
      cycle = true;
    }
  }
  col[u] = 2;
}

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, m; cin >> n >> m;
  while (m--) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  for (int i = 1; i <= n; i++) {
    if (col[i] == 0) dfs(i);
  }
  cout << (cycle ? "YES\n" : "NO\n") << '\n';
  return 0;
}