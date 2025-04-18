/**
 *    author: A K M S Limon
 *    created: 26-March-2025  20:40:06
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        ans += min(abs(a[i] - b[i]), abs(9 - abs(a[i] - b[i])));
      }
    }
    if (ans <= k) {
      ll rem = k - ans;
      if (rem % 2 == 0){
        cout << "Yes\n";
      }
      else {
        bool bl = false;
        for (int i = 0; i < n; i++) {
          ll mn = min(abs(a[i] - b[i]), abs(9 - abs(a[i] - b[i])));
          ll mx = max(abs(a[i] - b[i]), abs(9 - abs(a[i] - b[i])));
          if (mx <= rem + mn && (rem + mn - mx) % 2 == 0) {
            bl = true;
            break;
          }
        }
        if (bl) {
          cout << "Yes\n";
        }
        else {
          cout << "No\n";
        }
      }
    }
    else {
      cout << "No\n";
    }
  }
  return 0;
}