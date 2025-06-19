/**
 *    author: A K M S Limon
 *    created: 30-April-2025  20:32:20
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s, t; cin >> s >> t;
    bool bl = true;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0' && t[i] == '1') {
        bl = false;
      }
      else if (s[i] == '1' && t[i] == '0') {
        cnt++;
      }
    }
    if (bl && cnt % 2 == 0) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}