/**
 *    author: A K M S Limon
 *    created: 15-November-2024  19:19:56
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<int, int> mp;
    vector<int> v;
    for (int i = 1; i * i <= n - 1; i++) {
      v.push_back(i * i);
      mp[i * i]++;
    }
    int ans = -1, indi = -1, indj = -1;
    for (int i = 1; i < v.size(); i++) {
      for (int j = 1; j < v.size(); j++) {
        if (mp[v[i] + v[j]]) {
          indi = v[i], indj = v[j];
          ans = v[i] + v[j];
          goto here;
        }
      }
    }
    here:
    if (n % 2 == 0) {
      for (int i = 0; i < n / 2; i++) {
        cout << i + 1 << ' ' << i + 1 << ' ';
      }
      cout << '\n';
    }
    else {
      if (ans == -1) {
        cout << -1 << '\n';
      }
      else {
        int a[n];
        memset(a, -1, sizeof a);
        a[0] = 1, a[9] = 1, a[10] = 3, a[25] = 1, a[26] = 3;
        for (int i = 1; i < 9 - 1; i+=2) {
          a[i] = a[i + 1] = i + 1;
        }
        for (int i = 11; i < 25 - 1; i+=2) {
          a[i] = a[i + 1] = i + 1;
        }
        for (int i = 27; i < n - 1; i+= 2) {
          a[i] = a[i + 1] = i + 1;
        }
        for (int i = 0; i < n; i++) {
          cout << a[i] << ' ';
        }
        cout << '\n';
      }
    }
  }
  return 0;
}