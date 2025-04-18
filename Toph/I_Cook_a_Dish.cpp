/**
 *    author: A K M S Limon
 *    created: 18-April-2025  00:00:10
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int fact(int n) {
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

int nPr(int n, int r) {
  return fact(n) / fact(n - r);
}

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int d; cin >> d;
    int ans = nPr(s.size(), d);
    int zero = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        zero++;
      }
    }
    if (zero > 0) {
      ans -= (zero * nPr(s.size() - 1, d - 1));
    }
    cout << ans << '\n';
  }
  return 0;
}