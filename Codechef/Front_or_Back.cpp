/**
 *    author: A K M S Limon
 *    created: 30-April-2025  21:03:03
**/
#include <bits/stdc++.h>
#define ll long long
#define mod 998244353
using namespace std;

long long fact(int n) {
  long long result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

long long nPr(int n, int r) {
  return fact(n) / fact(n - r);
}

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool bl = true;
    for (int i = 0; i < n; i++) {
      if (!(a[i] == i || a[i] == n - i - 1)) {
        bl = false;
        break;
      }
    }
    map<pair<int, int>, int> mp;
    if (bl) {
      vector<pair<int, int>> v;
      for (int i = 0; i < n; i++) {
        int x = i, y = n - i - 1;
        if (y > x) {
          swap(x, y);
        }
        mp[make_pair(x, y)]++;
      }
      int cnt = 1;
      for (auto it : mp) {
        if (it.second >= 2) {
          cnt *= 2;
          cnt %= mod;
        }
      }
      cout << cnt << '\n';
    }
    else {
      cout << 0 << '\n';
    }
  }
  return 0;
}