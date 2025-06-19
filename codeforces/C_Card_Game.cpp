/**
 *    author: A K M S Limon
 *    created: 28-April-2025  21:32:58
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
    if (n == 2) {
      if (s[0] == 'A') {
        cout << "Alice" << '\n';
      }
      else {
        cout << "Bob" << '\n';
      }
    }
    else {
      bool bl = false;
      for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'B') {
          bl = true;
          break;
        }
      }
      if (s[n - 1] == 'B' && bl) {
        cout << "Bob" << '\n';
      }
      else {
        bl = false;
        for (int i = 1; i < n; i++) {
          if (s[i] == 'A') {
            bl = true;
            break;
          }
        }
        if (s[n - 2] == 'A') {
          cout << "Alice" << '\n';
        }
        else if (s[0] == 'A' && bl) {
          cout << "Alice" << '\n';
        }
        else {
          cout << "Bob" << '\n';
        }
      }
    }
  }
  return 0;
}