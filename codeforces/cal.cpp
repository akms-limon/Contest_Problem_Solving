/**
 *    author: A K M S Limon
 *    created: 04-June-2025  12:33:02
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  double widthFeet, widthInches, heightFeet, heightInches;
  cin >> widthFeet >> widthInches >> heightFeet >> heightInches;
  double area = (widthFeet + widthInches / 12) * (heightFeet + heightInches / 12);
  cout << fixed << setprecision(2) << area << '\n';
  return 0;
}