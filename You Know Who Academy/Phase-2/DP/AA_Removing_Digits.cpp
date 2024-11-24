/**
 *    author: A K M S Limon
 *    created: 15-November-2024  09:14:50
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6;
int dp[N];

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    vector<int> digits;
    dp[i] = INT_MAX;
    int temp = i;
    while (temp) {
      int digit = temp % 10;
      if (digit) {
        digits.push_back(digit);
      }
      temp /= 10;
    }
    for (auto digit : digits) {
      dp[i] = min(dp[i], 1 + dp[i - digit]);
    }
  }
  cout << dp[n];
  return 0;
}