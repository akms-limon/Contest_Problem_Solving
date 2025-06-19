/**
 *    author: A K M S Limon
 *    created: 01-May-2025  15:03:16
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9, inf = 1e9 + 9;
vector<int> g[N];
vector<int> dis(N, inf);

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, m; cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int u, v; cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  int p; cin >> p;
  queue<int> q;
  while (p--) {
    int x;  cin >> x;
    dis[x] = 0;
    q.push(x);
  }
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (auto v : g[u]) {
      if (dis[u] + 1 < dis[v]) {
        dis[v] = dis[u] + 1;
        q.push(v);
      }
    }
  }
  int mx = -1;
  for (int i = 1; i <= n; i++) {
    mx = max(mx, dis[i]);
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (dis[i] == mx) {
      ans = i;
      break;
    }
  }
  cout << mx << '\n' << ans << '\n';
  return 0;
}