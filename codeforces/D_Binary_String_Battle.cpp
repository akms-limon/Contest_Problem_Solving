/**
 *    author: A K M S Limon
 *    created: 08-July-2025  00:49:58
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') cnt++;
    }
    bool alice = false;
    if (cnt <= k) {
      alice = true;
    }
    else {
      if (n < 2 * k) {
        alice = true;
      }
    }
    if (alice) {
      cout << "Alice" << '\n';
    }
    else {
      cout << "Bob" << '\n';
    }
  }
  return 0;
}