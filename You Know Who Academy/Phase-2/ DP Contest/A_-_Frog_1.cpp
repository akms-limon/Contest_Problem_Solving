#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
const int inf = 1e9;

int n;
int a[N];
int dp[N];

int solve(int i) {
	if (i == n - 1) return 0;
	if (i >= n) return inf;
	if (dp[i] != -1) return dp[i];
	return dp[i] = min(solve(i + 1) + abs(a[i] - a[i + 1]), solve(i + 2) + abs(a[i] - a[i + 2]));
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << solve(0) << '\n';
}