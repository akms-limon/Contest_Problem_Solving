/**
 *    author: A K M S Limon
 *    created: 01-March-2024  20:27:09
**/
#include <bits/stdc++.h>
using namespace std;

int minCoins(int coins[], int m, int sum) {
	int table[sum + 1];
	table[0] = 0;
	for (int i = 1; i <= sum; i++)
		table[i] = INT_MAX;
	for (int i = 1; i <= sum; i++) {
		for (int j = 0; j < m; j++)
			if (coins[j] <= i) {
				int sub_res = table[i - coins[j]];
				if (sub_res != INT_MAX && sub_res + 1 < table[i])
					table[i] = sub_res + 1;
			}
    }

	if (table[sum] == INT_MAX)
		return -1;

	return table[sum];
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int sum; cin >> sum;
        int coins[] = {1, 3, 6, 10, 15};
        int cnt = 0;
        if (sum > 1e4) {
            cnt = sum / 15;
            sum = sum % 15;
        }
        if (cnt) {
            cnt -= 100;
            sum += (100 * 15);
        }
	    cout << minCoins(coins, 5, sum) + cnt <<'\n';
    }
	return 0;
}
