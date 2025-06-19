/**
 *    author: A K M S Limon
 *    created: 24-April-2025  20:38:11
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
    int zero = 0, one = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') zero++;
      else one++;
    }
    cout << (one * (one - 1)) + zero * (one + 1) << '\n';
  }
  return 0;
}