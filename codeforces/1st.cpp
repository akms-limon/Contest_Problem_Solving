#include<bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  double a[n];
  double sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  double prev = 0;
  for (int i = 0; i < n; i++) {
    prev += a[i];
    prev /= 2;
    sum += a[i];
  }
  cout << "Conventional Average: " << sum / n << '\n';
  cout << "New Average: " << prev << '\n';
}