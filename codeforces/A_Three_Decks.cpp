/**
 *    author: A K M S Limon
 *    created: 28-April-2025  20:38:57
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int a, b, c; cin >> a >> b >> c;
    int x = (a + b + c) / 3;
    if ((a + b + c) % 3 == 0) {
      if (a <= x && b <= x ) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}