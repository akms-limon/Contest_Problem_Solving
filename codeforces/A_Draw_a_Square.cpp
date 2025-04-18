/**
 *    author: A K M S Limon
 *    created: 11-March-2025  21:03:05
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    if (abs(a) == abs(b) && abs(b) == abs(c) && abs(c) == abs(d)) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}