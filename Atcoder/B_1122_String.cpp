/**
 *    author: A K M S Limon
 *    created: 22-November-2024  18:07:30
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  string s; cin >> s;
  bool bl = true;
  map<char, int> mp;
  for (int i = 0; i < s.size(); i++) {
    mp[s[i]]++;
  }
  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i * 2] != s[i * 2 + 1]) {
      bl = false;
    }
  }
  bool cl = true;
  for (auto it : mp) {
    if (it.second != 2) {
      cl = false;
    }
  }
  if (bl && s.size() % 2 == 0 && cl) {
    cout << "Yes" << '\n';
  }
  else {
    cout << "No" << '\n';
  }
  return 0;
}