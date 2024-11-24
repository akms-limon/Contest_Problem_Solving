/**
 *    author: A K M S Limon
 *    created: 16-November-2024  18:42:23
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  map<int, int> mp;
  while (n) {
    int digit = n % 10;
    mp[digit]++;
    n /= 10;
  }
  if (mp[1] == 1 && mp[2] == 2 && mp[3] == 3) {
    cout << "Yes" << '\n';
  }
  else {
    cout << "No" << '\n';
  }
  return 0;
}