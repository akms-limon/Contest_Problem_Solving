/**
 *    author: A K M S Limon
 *    created: 25-May-2025  19:01:27
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  int a[n];
  map<int, int> mp;
  int mx = INT_MIN;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
    mx = max(mx, a[i]);
  }
  cout << mp[mx] << '\n';
  return 0;
}