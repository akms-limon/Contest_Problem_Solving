/**
 *    author: A K M S Limon
 *    created: 19-April-2025  18:05:56
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  deque<int> dq;
  while (t--) {
    int x; cin >> x;
    if (x == 1) {
      int p; cin >> p;
      dq.push_back(p);
    }
    else {
      cout << dq.front() << '\n';
      dq.pop_front();
    }
  }
  return 0;
}