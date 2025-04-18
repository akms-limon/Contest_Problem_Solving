/**
 *    author: A K M S Limon
 *    created: 28-February-2025  20:46:54
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if (n % 3 != 1) {
      cout << "NO" << '\n';
    }
    else {
      cout << "YES" << '\n';
    }
  }
  return 0;
}