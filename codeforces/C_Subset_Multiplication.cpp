/**
 *    author: A K M S Limon
 *    created: 06-July-2025  21:23:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

map<int, int> primefactorize(int n) {
  map<int, int>primeFactors;
  for (int i = 2; i*i <= n; i++){
    if(n%i==0){
      int cnt = 0;
      while(n%i==0){
        cnt++;
        n/=i;
      }
      primeFactors[i] += cnt;
    }
  }
  if (n > 1) {
    primeFactors[n] += 1;
  }
  return primeFactors;
}

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int fn = 1;
    map<int, int> mp;
    for (int i = n - 1; i > 0; i--) {
      int intu_x = 1, y = 1, ans = 1;
      if (a[i] % a[i - 1] != 0) {
        intu_x = a[i - 1], y = a[i];
        map<int, int> mpx = primefactorize(intu_x);
        map<int, int> mpy = primefactorize(y);
        for (auto it : mpx) {
          mpx[it.first] = max(it.second - mpy[it.first], 0);
        }
        for (auto it : mpx) {
          int temp = 1;
          for (int i = 0; i < it.second; i++) {
            temp *= it.first;
          }
          ans *= temp;
        }
        a[i - 1] /= ans;
        i++;
      }
      mp[ans] = 1;
    }
    for (auto it : mp) {
      fn *= it.first;
    }
    cout << fn << '\n';
  }
  return 0;
}