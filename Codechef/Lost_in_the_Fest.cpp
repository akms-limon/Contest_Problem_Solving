/**
 *    author: A K M S Limon
 *    created: 26-March-2025  20:33:27
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
      cin >> a[i];
    }
    int last = a[n - 1];
    int i = 0; 
    while (a[i] < last && i < n - 1) {
      i++;
    }
    cout << n - i - 1 << '\n';
  }
  return 0;
}