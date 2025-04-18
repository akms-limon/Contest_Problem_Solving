/**
 *    author: A K M S Limon
 *    created: 05-April-2025  21:17:10
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n], b[n];
    map<int, int> pos_ina, pos_inb;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      pos_ina[a[i]] = i;
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      pos_inb[b[i]] = i;
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
      if (a[i] == b[i]) {
        if (i != n / 2) {
          v.push_back(make_pair(i, n / 2));
          int x = i, y = n / 2;
          swap(a[x], a[y]);
          swap(b[x], b[y]);
          break;
        }
      }
    }
    for (int i = 0; i < n; i++) {
      if (a[i] != b[n - i - 1]) {
        v.push_back(make_pair(pos_inb[a[i]], n - i - 1));
        int x = pos_inb[a[i]], y = n - i - 1;
        swap(a[x], a[y]);
        swap(b[x], b[y]);
      }
    }
    bool bl = true;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[n - 1 - i]) {
        bl = false;
        break;
      }
    }
    if (!bl) {
      cout << -1 << '\n';
    }
    else {
      cout << v.size() << '\n';
      for (int i = 0; i < v.size(); i++) {
        cout << v[i].first + 1 << " " << v[i].second + 1 << '\n';
      }
    }
  }
  return 0;
}