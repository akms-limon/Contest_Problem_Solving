/**
 *    author: A K M S Limon
 *    created: 25-May-2025  19:13:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> findSubstrings(string &s) {
  vector<string> res;
  for(int i = 0; i < s.length(); i++) {
    for(int j = i; j < s.length(); j++) {
      string temp = s.substr(i, j-i+1);
      sort(temp.begin(), temp.end());
      res.push_back(temp);
    }
  }
  return res;
}

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    vector<string> substrings = findSubstrings(s);
    map<string, int> mp;
    for (int i = 0; i < substrings.size(); i++) {
      mp[substrings[i]]++;
    }
    ll ans = 0;
    for (auto &it : mp) {
      int count = it.second;
      ans += (count * (count - 1)) / 2;
    }
    cout << ans << '\n';
  }
  return 0;
}