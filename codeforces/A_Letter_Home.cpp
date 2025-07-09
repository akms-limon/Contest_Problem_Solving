#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		int a[n], mx = INT_MIN, mn = INT_MAX;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mx = max(mx, a[i]);
			mn = min(mn, a[i]);
		}
		cout << mx - mn + min(abs(mx - x), abs(x - mn)) << '\n';
	}
}