/**
 *    author: A K M S Limon
 *    created: 08-April-2025  20:43:10
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int l = s.size() - 1, cnt = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] != '0') {
        l = i;
      }
    }
    for (int i = 0; i < l; i++) {
      if (s[i] != '0') {
        cnt++;
      }
    }
    cnt += (s.size() - l - 1);
    cout << cnt << '\n';
  }
  return 0;
}