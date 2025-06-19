/**
 *    author: A K M S Limon
 *    created: 25-May-2025  19:35:41
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n;
  while (cin >> n && n != 0) {
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    int overtakes = 0;
    ll x = a[0], y = b[0];
    int first = 2;
    for (int i = 1; i < n; i++) {
      x += a[i];
      y += b[i];
      if (first == 2) {
        if (x > y) {
          first = 1;
        }
        else if (y > x) {
          first = 0;
        }
        else {
          first = 2;
        }
      }
      if (first == 0 && x + a[i] > y + b[i]) {
        overtakes++;
        first = 1;
      }
      else if (y + b[i] > x + a[i]) {
        overtakes++;
        first = 0;
      }
    }
    cout << overtakes << '\n';
  }
  return 0;
}