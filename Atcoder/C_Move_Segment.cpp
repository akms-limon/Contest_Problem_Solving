/**
 *    author: A K M S Limon
 *    created: 16-November-2024  18:54:25
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, k; cin >> n >> k;
  string s; cin >> s;
  int k_plus_one = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      cnt++;
      while (s[i] == '1') {
        if (cnt == k) {
          s[i] = '0';
          k_plus_one++;
        }
        i++;
      }
      i--;
    }
  }
  cnt = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '1') {
      cnt++;
      while (s[i] == '1') {
        i++;
      }
      if (cnt == k - 1) {
        for (int j = i; j < i + k_plus_one; j++) {
          s[j] = '1';
        }
      }
    }
  }
  cout << s << '\n';
  return 0;
}