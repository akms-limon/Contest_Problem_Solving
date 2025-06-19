/**
 *    author: A K M S Limon
 *    created: 19-April-2025  18:00:58
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      cout << s[i];
    }
  }
  cout << endl;
  return 0;
}