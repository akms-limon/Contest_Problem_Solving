/**
 *    author: A K M S Limon
 *    created: 21-April-2025  21:05:23
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
    int status = 0;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        cnt++;
        if (status == 1) {
          cnt++;
        }
        status = 0;
      }
      else {
        cnt++;
        if (status == 0) {
          cnt++;
        }
        status = 1;
      }
    }
    int zero = 0, zeroone = 0, onezero = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        zero++;
      }
      if (i < s.size() - 1 && s[i] == '0' && s[i + 1] == '1') {
        zeroone++;
      }
      if (i < s.size() - 1 && s[i] == '1' && s[i + 1] == '0') {
        onezero++;
      }
    }
    if (s[0] == '1') {
      if (zero) {
        cnt--;
      }
      if (zeroone) {
        cnt--;
      }
    }
    if (s[0] == '0') {
      if (onezero) {
        cnt--;
      }
      if (zeroone > 1 && onezero) {
        cnt--;
      }
      else if (zeroone > 1) {
        cnt-=2;
      }
    }
    cout << cnt << '\n';
  }
  return 0;
}