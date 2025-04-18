/**
 *    author: A K M S Limon
 *    created: 11-March-2025  22:58:07
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string binary = bitset<32>(n).to_string();
    binary = binary.substr(binary.find('1')); // Remove leading zeros
    int binary_length = binary.length();
    int a = 1 << binary_length - 1;
    a = ~a & ((1 << binary_length) - 1);
    int b = n ^ a;
    if (a + b > n && a + n > b && b + n > a) {
      cout << a << '\n';
    }
    else {
      cout << -1 << '\n';
    }
  }
  return 0;
}