/**
 *    author: A K M S Limon
 *    created: 15-November-2024  21:56:05
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  string s; cin >> s;
  for (int i = 0; i < s.size(); i++) {
    cout << char('z' - s[i] + 'a');
  }
  cout << '\n';
  return 0;
}