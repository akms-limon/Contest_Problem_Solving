/**
 *    author: A K M S Limon
 *    created: 26-April-2025  14:38:54
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int n = s.size();
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    string ans = "0000000000";
    for (int i = 0; i < n; i++) {
      char temp;
      for (int j = n - 1; j >= 0; j--) {
        if (s[j] >= char('9' - i)) {
          temp = s[j];
          s[j] = '-';
          break;
        }
      }
      ans[i] = temp;
    }
    cout << ans << endl;
  }
  return 0;
}