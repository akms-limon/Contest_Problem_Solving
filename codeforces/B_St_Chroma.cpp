/**
 *    author: A K M S Limon
 *    created: 24-April-2025  20:43:33
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, x; cin >> n >> x;
    if (x == n) {
      for (int i = 0; i < n; i++) {
        cout << i << ' ';
      }
      cout << '\n';
    }
    else {
      for (int i = 0; i < n; i++) {
        if (i != x) {
          cout << i << ' ';
        }
      }
      cout << x << '\n';
    }
  }
  return 0;
}