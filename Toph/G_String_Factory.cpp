/**
 *    author: A K M S Limon
 *    created: 18-April-2025  01:10:40
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int ans = 1;
    for (int i = 0; i < s.size() - 1; i++) {
      int cnt = abs(s[i + 1] - s[i]) + 1;
      if (cnt == 1 && s[i] != 'a') {
        cnt = 2;
      }
      ans = (ans * cnt) % 1000000007;
    }
    cout << ans << '\n';
  }
  return 0;
}