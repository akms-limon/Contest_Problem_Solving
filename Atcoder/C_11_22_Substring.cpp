/**
 *    author: A K M S Limon
 *    created: 22-November-2024  18:16:05
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  string s; cin >> s;
  int ans = INT_MIN;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '/') {
      int one = 0, two = 0;
      int j = i - 1;
      while (j >= 0 && s[j] == '1') {
        one++;
        j--;
      }
      j = i + 1;
      while (j < s.size() && s[j] == '2') {
        two++;
        j++;
      }
      ans = max(ans, min(one, two));
    }
  }
  cout << ans * 2 + 1 << '\n';
  return 0;
}