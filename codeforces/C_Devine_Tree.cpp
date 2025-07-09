#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, sum; cin >> n >> sum;
    if (sum < n - 1 || sum > (n * (n - 1)) / 2) {
      cout << -1 << '\n';
    }
    else {
      cout << 1 << '\n';
      int i = 1;
      --n;
      while (sum > n) {
        int temp = sum - n;
        if (temp >= i) {
          sum -= i;
          cout << i << ' ' << ++i << '\n';
          n--;
        }
        else {
          sum -= (temp - 1);
          cout << temp << ' ' << ++i << '\n';
          n--;
          break;
        }
      }
      for (i; i <= n; i++) {
        cout << 1 << ' ' << i << '\n';
      }
    }
  }

  return 0;
}
