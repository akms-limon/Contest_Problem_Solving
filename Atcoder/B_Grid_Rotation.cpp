/**
 *    author: A K M S Limon
 *    created: 03-May-2025  18:08:21
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  char s[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> s[i][j];
    }
  }
  char t[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> t[i][j];
    }
  }
  int cnt = 0, ans = INT_MAX;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (s[i][j] != t[i][j]) {
        cnt++;
      }
    }
  }
  ans = min(ans, cnt);
  char rotated_90_degree[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      rotated_90_degree[i][j] = s[n - j - 1][i];
    }
  }
  cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (t[i][j] != rotated_90_degree[i][j]) {
        cnt++;
      }
    }
  }
  ans = min(ans, cnt + 1);
  char rotated_180_degree[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      rotated_180_degree[i][j] = s[n - i - 1][n - j - 1];
    }
  }
  cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (t[i][j] != rotated_180_degree[i][j]) {
        cnt++;
      }
    }
  }
  ans = min(ans, cnt + 2);
  char rotated_270_degree[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      rotated_270_degree[i][j] = s[j][n - i - 1];
    }
  }
  cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (t[i][j] != rotated_270_degree[i][j]) {
        cnt++;
      }
    }
  }
  ans = min(ans, cnt + 3);
  cout << ans << endl;
  return 0;
}