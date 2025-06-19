#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 10;
vector<int> g[N];
int vis[N];

void dfs(int u) {
  vis[u] = true;
  for (auto it : g[u]) {
    if (!vis[it]) {
      dfs(it);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  freopen("large_test_case3.txt", "r", stdin);
  freopen("large_output3.txt", "w", stdout);
  int n, m; cin >> n >> m;
  set<int> s;
  for (int i = 0; i < m; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
    s.insert(u);
    s.insert(v);
  }
  int cnt = 0;
  for (auto it : s) {
    if (!vis[it]) {
      cnt++;
      dfs(it);
    }
  }
  cout << cnt + (n - s.size()) << '\n';
  return 0;
}