/**
 *    author: A K M S Limon
 *    created: 09-April-2025  19:45:42
**/
#include <bits/stdc++.h>
#define ll long long
#define int unsigned long long
using namespace std;

int first, second, third, fourth;

void divide(int start, int end) {
  int gap = (end - start + 1);
  gap /= 4;
  first = start, second = first + gap, third = second + gap, fourth = third + gap;
}

struct node {
  int i, j;
};

int32_t main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int q; cin >> q;
    while (q--) {
      string s; cin >> s;
      if (s == "->") {
        int x, y; cin >> x >> y;
        node p, q;
        p.i = 1, p.j = 1, q.i = (1 << n), q.j = (1 << n);
        divide(1, (1LL << n) * (1LL << n));
        while (p.i != q.i && p.j != q.j) {
          node mid;
          mid.i = (p.i + q.i) / 2;
          mid.j = (p.j + q.j) / 2;
          int gap = second - first - 1;
          if (x <= mid.i && y <= mid.j) {
            q.i = mid.i, q.j = mid.j;
            divide(first, first + gap);
          }
          else if (x <= mid.i && y > mid.j) {
            p.j = mid.j + 1, q.i = mid.i;
            divide(fourth, fourth + gap);
          }
          else if (x > mid.i && y <= mid.j) {
            p.i = mid.i + 1, q.j = mid.j;
            divide(third, third + gap);
          }
          else {
            p.i = mid.i + 1, p.j = mid.j + 1;
            divide(second, second + gap);
          }
        }
        cout << first << '\n';
      }
      else {
        int k; cin >> k;
        node p, q;
        p.i = 1, p.j = 1, q.i = (1 << n), q.j = (1 << n);
        divide(1, (1LL << n) * (1LL << n));
        while (p.i != q.i && p.j != q.j) {
          node mid;
          mid.i = (p.i + q.i) / 2;
          mid.j = (p.j + q.j) / 2;
          int gap = second - first - 1;
          if (k >= first && k < second) {
            q.i = mid.i, q.j = mid.j;
            divide(first, first + gap);
          }
          else if (k >= second && k < third) {
            p.i = mid.i + 1, p.j = mid.j + 1;
            divide(second, second + gap);
          }
          else if (k >= third && k < fourth) {
            p.i = mid.i + 1, q.j = mid.j;
            divide(third, third + gap);
          }
          else {
            p.j = mid.j + 1, q.i = mid.i;
            divide(fourth, fourth + gap);
          }
        }
        cout << p.i << ' ' << p.j << '\n';
      }
    }
  }
  return 0;
}