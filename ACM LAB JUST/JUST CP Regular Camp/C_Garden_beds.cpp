/**
 *    author: A K M S Limon
 *    created: 01-May-2025  12:14:45
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e3 + 10;
int n, m;
vector<vector<bool>> vis(N, vector<bool> (N, false));
char a[N][N];

void dfs(int i, int j) {
  if (i < 0 || j < 0 || i >= n || j >= m) return;
  if (vis[i][j] == true || a[i][j] == '.') return;
  vis[i][j] = true;
  dfs(i, j + 1);
  dfs(i, j - 1);
  dfs(i + 1, j);
  dfs(i - 1, j);
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  int total_components = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == '#' && !vis[i][j]) {
        total_components++;
        dfs(i, j);
      }
    }
  }
  cout << total_components << '\n';
  return 0;
}