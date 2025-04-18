/**
 *    author: A K M S Limon
 *    created: 11-March-2025  21:12:31
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      sum += x;
    }
    cout << sum - n + 1 << '\n';
  }
  return 0;
}