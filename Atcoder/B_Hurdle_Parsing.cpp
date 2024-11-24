/**
 *    author: A K M S Limon
 *    created: 16-November-2024  18:45:17
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    int cnt = 0;
    while (s[i] == '-') {
      cnt++;
      i++;
    }
    if (cnt)
    cout << cnt << ' ';
  }
  cout << '\n';
  return 0;
}