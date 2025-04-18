/**
 *    author: A K M S Limon
 *    created: 08-April-2025  21:01:27
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n) {
  if (n <= 1) return false;
  if (n <= 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;
  for (ll i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return false;
  }
  return true;
}

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    if (k > 1) {
      if (n == 1 && k == 2) {
        cout << "YES" << endl;
      }
      else {
        cout << "NO" << endl;
      }
      continue;
    }
    if (isPrime(n)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}