/**
 *    author: A K M S Limon
 *    created: 05-July-2025  21:13:00
**/
#include <bits/stdc++.h>
#define ll long long
#define int ll
using namespace std;

struct point {
  int x, y;
};


int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    point p, q; cin >> p.x >> p.y >> q.x >> q.y;
    int a[n];
    int mx = INT_MIN, sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
      mx = max(a[i], mx);
    }
    bool bl = true;
    if (p.x == q.x && p.y == q.y) {
      if (mx <= (sum - mx)) {
        bl = true;
      }
      else {
        bl = false;
      }
    }
    else {
      double dist = sqrtl((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
      if (n == 1) {
        if (dist == sum) {
          bl = true;
        }
        else {
          bl = false;
        }
      }
      else {
        if (sum >= dist) {
          if (mx <= dist) {
            bl = true;
          }
          else {
            if (sum - mx >= mx - dist) {
              bl = true;
            }
            else {
              bl = false;
            }
          }
        }
        else {
          bl = false;
        }
      }
    }
    if (bl) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}