/**
 *    author: A K M S L.
 *    created: 01-May-2025  16:59:06
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3 + 5;
vector<vector<char>> g(N, vector<char>(N));
int vis[N][N];
int n;

void dfs(int i, int j) {
  if (i < 0 || i >= n || j < 0 || j >= n) return;
  if (vis[i][j] || g[i][j] == 'O') return;
  vis[i][j] = 1;
  dfs(i + 1, j);
  dfs(i - 1, j);
  dfs(i, j + 1);
  dfs(i, j - 1);
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> g[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!vis[i][j] && g[i][j] == 'X') {
        dfs(i, j);
      }
    }
  }

  return 0;
}