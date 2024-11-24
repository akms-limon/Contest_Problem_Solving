/**
 *    author: A K M S Limon
 *    created: 15-November-2024  21:54:11
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int sum = accumulate(a.begin(), a.end(), 0);
  
  return 0;
}