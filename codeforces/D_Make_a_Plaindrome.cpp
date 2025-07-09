/**
 *    author: A K M S Limon
 *    created: 07-July-2025  22:26:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    vector<int> a, b, v; 
    for (int i = 0; i < n; i++) {
      int x; cin >> x;
      a.push_back(x);
      b.push_back(x);
    }
    sort(a.begin(), a.end());
    int kth = a[k - 1];
    for (int i = 0; i < n; i++) {
      if (b[i] <= kth) {
        v.push_back(b[i]);
      }
    }
    bool bl = true;
    for (int i = 0, j = v.size() - 1; i < j; ) {
      if (v[i] == v[j]) {
        i++, j--;
      }
      else {
        if (v[i] == kth) {
          v[i] = -1;
          i++;
        }
        else if (v[j] == kth) {
          v[j] = -1;
          j--;
        }
        else {
          bl = false;
          break;
        }
      }
    }
    vector<int> fn;
    for (auto it : v) {
      if (it != -1) {
        fn.push_back(it);
      }
    }
    if (fn.size() < k - 1) {
      bl = false;
    }
    else {
      for (int i = 0, j = fn.size() - 1; i < j; i++, j--) {
        if (fn[i] != fn[j]) {
          bl = false;
        }
      }
    }
    if (bl) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  return 0;
}