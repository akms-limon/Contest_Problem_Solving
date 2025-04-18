/**
 *    author: A K M S Limon
 *    created: 25-March-2025  20:39:26
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    map<int, int> mp, ans;
    bool ansb = false;
    int ind = 0;
    mp[0] = 3, mp[1] = 1, mp[2] = 2, mp[3] = 1, mp[5] = 1;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      ans[a[i]]++;
      bool b = true;
      for (auto it : mp) {
        if (it.second > ans[it.first]) {
          b = false;
          break;
        }
      }
      if (b) {
        ansb = true;
        ind = i + 1;
        break;
      }
    }
    for (auto &it : mp) {
      it.second = 0;
    }
    cout << ind << '\n';
  }
  return 0;
}