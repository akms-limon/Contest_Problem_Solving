#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5 + 9, inf = 1e9 + 7;
int h[N], dp[N];

int frog(int n) {
	if (n == 0) return 0;
	if (n < 0) return inf;
	if (dp[n] != -1) return dp[n];
	int ans = frog(n - 1) + abs(h[n - 1] - h[n]);
	ans = min(ans, frog(n - 2) + abs(h[n - 2] - h[n]));
	return dp[n] = ans;
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	memset(dp, -1, sizeof dp);
	cout << frog(n - 1) << '\n';
	return 0;
}