#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t, cs = 1; cin >> t;
    while (t--) {
    	int n; cin >> n;
    	vector<int> bas, panda;
    	for (int i = 0; i < n; i++) {
    		int x; cin >> x;
    		bas.push_back(x);
    	}
    	for (int i = 0; i < n; i++) {
    		int x; cin >> x;
    		panda.push_back(x);
    	}
    	ll ans = 1;
    	sort(bas.begin(), bas.end());
    	sort(panda.begin(), panda.end());
    	for (int i = 0; i < n; i++) {
    		int cnt = upper_bound(bas.begin(), bas.end(), panda[i]) - bas.begin();
    		if (cnt - i <= 0) ans = 0;
    		ans *= (cnt - i);
    		ans %= 1000000007;
    	}
    	cout << "Case " << cs++ << ": " << ans << '\n';
    }
    return 0;
}