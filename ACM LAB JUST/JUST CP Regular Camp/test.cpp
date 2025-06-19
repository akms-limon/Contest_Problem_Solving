/**
 *    author: A K M S Limon
 *    created: 03-May-2025  00:44:07
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    int n = s.size();
    int firstl = -1, lastl = -1, firstr = -1, lastr = -1;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'R') {
        lastr = i;
      }
      if (s[i] == 'L') {
        lastl = i;
      }
      if (s[i] == 'R' && firstr == -1) {
        firstr = i;
      }
      if (s[i] == 'L' && firstl == -1) {
        firstl = i;
      }
    }
    if (firstl < firstr || firstr == -1) {
      for (int i = firstl; i >= 0; i--) {
        s[i] = 'L';
      }
    }
    if (lastr > lastl || lastl == -1) {
      for (int i = lastr; i < n; i++) {
        s[i] = 'R';
      }
    }
    if (firstr != -1) {
      for (int i = firstr; i < lastl; i++) {
        if (s[i] == 'R') {
          int temp = i;
          int ind = 0;
          i++;
          while (!(s[i] == 'R' || s[i] == 'L') && i < n) {
            i++;
            ind = i;
          }
          if (s[ind] == 'R') {
            for (int j = temp; j <= ind; j++) {
              s[j] = 'R';
            }
            i--;
          }
          else if (s[ind] == 'L') {
            for (int j = temp; j <= (temp + ind) / 2; j++) {
              s[j] = 'R';
            }
            for (int j = ((temp + ind) / 2) + 1; j <= ind; j++) {
              s[j] = 'L';
            }
            if ((ind - temp) % 2 == 0) {
              s[((temp + ind) / 2)] = '.';
            }
          }
        }
      }
    }
    cout << s << '\n';
  return 0;
}