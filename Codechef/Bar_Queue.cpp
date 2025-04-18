/**
 *    author: A K M S Limon
 *    created: 16-April-2025  20:37:06
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int b = 0, g = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
      cnt++;
      if (s[i] == 'B') {
        b++;
        if (b > g * 2) {
          break;
        }
      }
      else if (s[i] == 'G') {
        g++;
      }
    }
    cout << cnt << '\n';
  }
  return 0;
}