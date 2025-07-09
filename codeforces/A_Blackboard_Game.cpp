/**
 *    author: A K M S Limon
 *    created: 07-July-2025  23:53:23
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    if  (n % 4) {
      cout << "Alice" << '\n';
    }
    else {
      cout << "Bob" << '\n';
    }
  }
  return 0;
}