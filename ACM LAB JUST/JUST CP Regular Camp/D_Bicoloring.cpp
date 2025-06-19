/**
 *    author: A K M S Limon
 *    created: 05-April-2024  23:36:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9;
vector<int> g[N];
bool vis[N];
int col[N];
bool bl = true;

void dfs(int u) {
  vis[u] = true;
  for (auto v : g[u]) {
    if (!vis[v]) {
      col[v] = col[u] ^ 1;
      dfs(v);
    }
    else {
      if (col[v] == col[u]) {
        bl = false;
      }
    }
  }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    while (cin >> n && n != 0) {
      cin >> m;
      set<int> s;
      int i = 0;
      while (m--) {
        int u, v;
        cin >> u >> v;
        s.insert(u), s.insert(v);
        i += 2;
        g[v].push_back(u);
        g[u].push_back(v);
      }
      auto temp = s.begin();
      col[*temp] = 1;
      for (auto it : s) {
        if (!vis[it]) {
          dfs(it);
        }
      }
      if (bl) {
        cout << "BICOLOURABLE." << '\n';
      }
      else {
        cout << "NOT BICOLOURABLE." << '\n';
      }
      for (int i = 1; i <= n; i++) {
        g[i].clear();
        vis[i] = false;
        col[i] = 0;
        bl = true;
      }
    }
    return 0;
}