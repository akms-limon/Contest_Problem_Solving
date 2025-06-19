/**
 *    author: A K M S Limon
 *    created: 19-April-2025  20:57:59
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int a[n], b[n];
    ll sum = 0;
    for (int i = 0; i < n ; i++) {
      cin >> a[i];
      sum += a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      if (a[i] < b[i]) {
        sum -= a[i];
        sum += b[i];
        swap(a[i], b[i]);
      }
    }
    sort(b, b + n);
    reverse(b, b + n);
    for (int i = 0; i < k - 1; i++) {
      sum += b[i];
    }
    cout << sum + 1<< '\n';
  }
  return 0;
}