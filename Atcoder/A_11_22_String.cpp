/**
 *    author: A K M S Limon
 *    created: 22-November-2024  18:01:48
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  string s; cin >> s;
  int one = 0, two = 0;
  for (int i = 0; i < n / 2; i++) {
    if (s[i] == '1') {
      one++;
    }
  }
  for (int i = (n / 2) + 1; i < n; i++) {
    if (s[i] == '2') {
      two++;
    }
  }
  if (s[n / 2] == '/' && one == two && one == n / 2) {
    cout << "Yes" << '\n';
  }
  else {
    cout << "No" << '\n';
  }
  return 0;
}