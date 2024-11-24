/**
 *    author: A K M S Limon
 *    created: 15-November-2024  10:08:03
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 10;
int n, a[N], b[N], c[N];
map<pair<int, int>, ll> dp;

ll f(int i, int last) {
  if (i == n) return 0;
  if (dp[{i, last}]) return dp[{i, last}];
  for (int k = 0; k < 3; k++) {
    if (k == last) continue;
    if (k == 0) {
      dp[{i, last}] = max(a[i] + f(i + 1, k), dp[{i, last}]);
    }
    if (k == 1) {
      dp[{i, last}] = max(b[i] + f(i + 1, k), dp[{i, last}]);
    }
    if (k == 2) {
      dp[{i, last}] = max(c[i] + f(i + 1, k), dp[{i, last}]);
    }
  }
  return dp[{i, last}];
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i] >> c[i];
  }
  cout << f(0, -1) << '\n';
  return 0;
}