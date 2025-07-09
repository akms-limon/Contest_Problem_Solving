#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		map<char, int> mp;
		for (int i = 0; i < n; i++) {
			mp[s[i]]++;
		}
		int cnt = 0;
		for (auto it : mp) {
			if (it.second > 1) {
				cnt++;
			}
			if (it.second > 2) cnt+=2;
		}
		if (cnt > 1 || (cnt == 1 && s[0] != s[n - 1])) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
}