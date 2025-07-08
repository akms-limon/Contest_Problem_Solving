/**
 *    author: A K M S Limon
 *    created: 05-July-2025  22:15:52
**/
#include <bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, l, r, k; cin >> n >> l >> r >> k;
    if (n % 2) {
      cout << l << '\n';
    }
    else {
      if (n == 2) {
        cout << -1 << '\n';
      }
      else {
        int temp = l, x = 1;
        while (temp >>= 1) {
          x <<= 1;
        }
        x <<= 1;
        if (x > r) {
          cout << -1 << '\n';
        }
        else {
          if (k < n - 1) {
            cout << l << '\n';
          }
          else {
            cout << x << '\n';
          }
        }
      }
    }
  }
  return 0;
}