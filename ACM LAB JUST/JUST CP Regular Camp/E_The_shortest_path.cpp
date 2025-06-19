/**
 *    author: A K M S Limon
 *    created: 10-June-2024  13:10:00
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9, inf = 1e9 + 9;
vector<int> g[N];
vector<int> dis(N, inf);
int par[N];

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, m; cin >> n >> m;
  int x, y; cin >> x >> y;
  while (m--) {
    int a, b; cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  queue<int> q;
  q.push(x);
  dis[x] = 0;
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (auto v : g[u]) {
      if (dis[u] + 1 < dis[v]) {
        dis[v] = dis[u] + 1;
        q.push(v);
        par[v] = u;
      }
    }
  }
  if (dis[y] == inf) {
      cout << -1 << '\n';
  }
  else {
    cout << dis[y] << '\n';
    vector<int> ans;
    ans.push_back(y);
    while (par[y] != x) {
      ans.push_back(par[y]);
      y = par[y];
    }
    ans.push_back(x);
    for (int i = ans.size() - 1; i >= 0; i--) {
      cout << ans[i] << ' ';
    }
    cout << '\n';
  }
  return 0;
}