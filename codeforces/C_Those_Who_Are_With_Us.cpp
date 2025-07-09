#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[n][m], b[n][m];
		int mx = INT_MIN;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				b[i][j] = a[i][j];
				mx = max(mx, a[i][j]);
			}
		}
		//first row operation and secondly column operation.
		int row = 0, column = 0, bl = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == mx && bl == false) {
					bl = true;
					for (int col = 0; col < m; col++) {
						a[i][col]--;
					}
				}
				if (a[i][j] == mx) {
					for (int row = 0; row < n; row++) {
						a[row][j]--;
					}
					goto here;
				}
			}
		}
		here:
		int ans = INT_MIN, ans1 = ans;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				ans = max(ans, a[i][j]);
			}
		}
		//first column operation and secondly row operation
		row = 0, column = 0, bl = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (bl == false && b[i][j] == mx) {
					bl = true;
					for (int row = 0; row < n; row++) {
						b[row][j]--;
					}
				}
				if (b[i][j] == mx) {
					for (int col = 0; col < m; col++) {
						b[i][col]--;
					}
					goto here1;
				}
			}
		}
		here1:
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				ans1 = max(ans1, b[i][j]);
			}
		}
		cout << min(ans, ans1) << '\n';

	}
	return 0;
}