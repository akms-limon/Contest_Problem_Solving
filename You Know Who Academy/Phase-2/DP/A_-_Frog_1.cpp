#include<bits/stdc++.h>
#define int long long
using namespace std;

const int inf = 1e12;
const int N = 1e5 + 7;

int dp[N];
int a[N];
int n;

int rec(int i) {
	if (i >= n) return inf;
	if (i == n - 1) return 0;
	int &ans = dp[i];
	if (ans != -1) return ans;
	return ans = min(rec(i + 1) + abs(a[i] - a[i + 1]), rec(i + 2) + abs(a[i] - a[i + 2]));
}

int32_t main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	memset(dp, -1, sizeof dp);
	cout << rec(0) << '\n';
	return 0;
}