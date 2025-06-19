/**
 *    author: A K M S Limon
 *    created: 19-April-2025  20:41:31
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    int l = 1, r = n;
    vector<int> v;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == '>') {
        if (r == 0) {
          v.push_back(l);
          continue;
        }
        v.push_back(r);
        r--;
      }
      else if (s[i] == '<') {
        v.push_back(l);
        l++;
      }
    }
    if (l == n + 1) {
      v.push_back(r);
    }
    else {
      v.push_back(l);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
      cout << v[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}