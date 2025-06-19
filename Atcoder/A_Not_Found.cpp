/**
 *    author: A K M S Limon
 *    created: 03-May-2025  18:01:13
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  string s; cin >> s;
  string temp = "abcdefghijklmnopqrstuvwxyz";
  map<char, int> mp;
  for (int i = 0; i < s.size(); i++) {
    mp[s[i]]++;
  }
  for (int i = 0; i < temp.size(); i++) {
    if (mp[temp[i]] == 0) {
      cout << temp[i] << endl;
      return 0;
    }
  }
  return 0;
}