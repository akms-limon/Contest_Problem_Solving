/**
 *    author: A K M S Limon
 *    created: 23-March-2025  13:27:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    map<char, int> mp;
    for (int i = 0; i < n; i ++) {
      mp[s[i]]++;
    }
    if (rev > s) {
      cout << "YES" << '\n';
    }
    else {
      if (mp.size() > 1 && k > 0) {
        cout << "YES" << '\n';
      }
      else {
        cout << "NO" << '\n';
      }
    }
  }
  return 0;
}