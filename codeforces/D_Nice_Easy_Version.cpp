/**
 *    author: A K M S Limon
 *    created: 16-November-2024  11:09:42
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    bool bl = false;
    while (!bl) {
      int temp = n;
      bool cl = true;
      while (temp) {
        int digit = temp % 10;
        if (!(digit == 6 || digit == 9)) {
          cl = false;
        }
        temp/=10;
      }
      if (cl) bl = true;
      n++;
    }
    cout << n - 1 << '\n';
  }
  return 0;
}