/**
 *    author: A K M S Limon
 *    created: 28-February-2025  20:59:21
**/
#include <bits/stdc++.h>
#define ll long long
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int sum = (n * (n + 1)) / 2;
    int x = sqrt(sum);
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
      a[i] = i;
    }
    if (x * x == sum) {
      cout << -1 << '\n';
    }
    else {
      sum = 0;
      for (int i = 1; i <= n; i++) {
        sum += a[i];
        x = sqrt(sum);
        if (x * x == sum && i != n) {
          sum -= a[i];
          sum += a[i + 1];
          swap(a[i], a[i + 1]);
        }
      }
      for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
      }
      cout << '\n';
    }
  }
  return 0;
}