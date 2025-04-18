/**
 *    author: A K M S Limon
 *    created: 25-March-2025  21:24:10
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n % 2) {
      for (int i = 1; i <= n; i+=2) {
        cout << i << ' ';
      }
      for (int i = 2; i <= n; i+=2) {
        cout << i << ' ';
      }
      cout << '\n';
    }
    else {
      cout << -1 << '\n';
    }
  }
  return 0;
}