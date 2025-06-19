/**
 *    author: A K M S Limon
 *    created: 17-May-2025  21:21:38
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, m, a, b; cin >> n >> m >> a >> b;
    int mx = (a - 1);
    mx = max(mx, n - a);
    int my = (b - 1);
    my = max(my, m - b);
    int temp1 = n, temp2 = m;
    m = m - my;
    int ans = 1;
    while (n > 1) {
      if (n % 2 == 1) {
        n++;
      }
      n /= 2;
      ans++;
    }
    while (m > 1) {
      if (m % 2 == 1) {
        m++;
      }
      m /= 2;
      ans++;
    }
    n = temp1;
    m = temp2;
    n = n - mx;
    int ans1 = 1;
    while (n > 1) {
      if (n % 2 == 1) {
        n++;
      }
      n /= 2;
      ans1++;
    }
    while (m > 1) {
      if (m % 2 == 1) {
        m++;
      }
      m /= 2;
      ans1++;
    }
    cout << min(ans, ans1) << '\n';
  }
  return 0;
}
