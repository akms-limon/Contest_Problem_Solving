/**
 *    author: A K M S Limon
 *    created: 28-April-2025  20:45:17
**/
#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int post[n];
    post[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      post[i] = post[i + 1] + a[i];
    }
    int premax[n];
    premax[0] = a[0];
    for (int i = 1; i < n; i++) {
      premax[i] = max(premax[i - 1], a[i]);
    }
    for (int i = 0; i < n; i++) {
      cout << max(post[n - i - 1] - a[n - i - 1] + premax[n - i - 1], post[n - i - 1]) << " ";
    }
    cout << '\n';
  }
  return 0;
}