#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      int a, b; cin >> a >> b;
      int x, y; cin >> x >> y;
      if (y == -(x - m) || (x == y && a == b)) {
        cnt++;
      }
    }
    cout << cnt << '\n';
  }

  return 0;
}
