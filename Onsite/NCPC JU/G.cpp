#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cs = 1;
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int fast, last, j;
        vector<int>v, v2;
        for (fast = 0, j = 0; j < n; j++) {
            if (b[fast] == a[j]) {
                v.push_back(j);
                fast++;
            }
        }
        for (last = n - 1, j = n - 1; j >= 0; j--) {
            if (b[last] == a[j]) {
                v2.push_back(j);
                last--;
            }
        }
        reverse(v2.begin(), v2.end());
        int ans = max(v.size(), v2.size());
        for (int i = v.size() - 1, j = v2.size() - 1; i >= 0 && j >= 0; ) {
            if (v[i] >= v2[j]) {
                i--;
            }
            else {
                int temp = i + 1 + (v2.size() - j);
                ans = max(ans, temp);
                j--;
            }
        }
        cout << "Case " << cs++ << ": " << n - ans << '\n';
    }
    return 0;
}