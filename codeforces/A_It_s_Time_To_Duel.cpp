/**
 *    author: A K M S Limon
 *    created: 17-May-2025  20:48:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool bl = true, zero = true;
    for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
        zero = false;
      }
      if (a[i] == 0) {
        if (i > 0) {
          if (a[i - 1] != 1) {
            bl = false;
          }
        }
        else if (i < n - 1) {
          if (a[i + 1] != 1) {
            bl = false;
          }
        }
      }
    }
    if (!bl || zero) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}