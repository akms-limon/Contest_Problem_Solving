/**
 *    author: A K M S Limon
 *    created: 17-November-2024  21:41:46
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    bool first = false;
    string s;
    int prev = 0;
    s.push_back('0');
    for (int i = 2; i <= n; i++) {
      cout << '?' << ' ' << 1 << ' ' << i << endl;
      int x; cin >> x;
      if (x != prev) {
        if (!first) {
          for (int j = 0; j < s.size() - x; j++) {
            s[j] = '1';
          }
          first = true;
        }
        prev = x;
        s.push_back('1');
      }
      else {
        s.push_back('0');
      }
    }
    if (first) {
      cout << '!' << ' ' << s << endl;
    }
    else {
      cout << '!' << ' ' << "IMPOSSIBLE" << endl;
    }
  }
  return 0;
}