/**
 *    author: A K M S Limon
 *    created: 22-November-2024  18:21:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int i = 0, j = 0;
  map<int, int> mp;
  int ans = 0;
  for (int i = 0; i < n - 1; i+=2) {
    mp[a[i]]++;
    mp[a[i + 1]]++;
    if (mp[a[i]] > 2) {
      while (j < i && mp[a[i]] > 2) {
        mp[a[j]]--;
        mp[a[j + 1]]--;
        j+=2;
      }
    }
    if (a[i] == a[i + 1]) {
      ans = max(ans, i - j + 2);
    }
    else {
      for (int k = j; k <= i; k+= 2) {
        mp[a[k]]--;
        mp[a[k + 1]]--;
      }
      j = i + 2;
    }
  }
  j = 1;
  mp.clear();
  for (int i = 1; i < n - 1; i+=2) {
    mp[a[i]]++;
    mp[a[i + 1]]++;
    if (mp[a[i]] > 2) {
      while (j < i && mp[a[i]] > 2) {
        mp[a[j]]--;
        mp[a[j + 1]]--;
        j+=2;
      }
    }
    if (a[i] == a[i + 1]) {
      ans = max(ans, i - j + 2);
    }
    else {
      for (int k = j; k <= i; k+= 2) {
        mp[a[k]]--;
        mp[a[k + 1]]--;
      }
      j = i + 2;
    }
  }
  cout << ans << '\n';
  return 0;
}