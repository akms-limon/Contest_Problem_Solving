#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int a1, b1, a2, b2, a3, b3; cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    int mx = max({a1, b1, a2, b2, a3, b3});
    ll sum = a1 * b1 + a2 * b2 + a3 * b3;
    ll x = sqrt(sum);
    if (sum == x * x) {
      int bl = false;
      if (a1 == a2 && a2 == a3 && b1 + b2 + b3 == a1) {
        bl = true;
      }
      if (b1 == b2 && b2 == b3 && a1 +a2 + a3 == b1) {
        bl = true;
      }
      int temp = max({a1, a2, a3});
      if (temp == mx) {
        if (a1 + a2 + a3 - temp == mx && max({b1, b2, b3}) + min({b1, b2, b3}) == mx) {
          bl = true;
        }
      }
      temp = max({b1, b2, b3});
      if (temp == mx) {
        if (b1 + b2 + b3 - temp == mx && max({a1, a2, a3}) + min({a1, a2, a3}) == mx) {
          bl = true;
        }
      }
      if (bl) 
      cout << "YES" << '\n';
      else {
        cout << "NO" << '\n';
      }
    }
    else {
      cout << "NO" << '\n';
    }
  }

  return 0;
}
