/**
 *    author: A K M S Limon
 *    created: 30-January-2024  00:55:22
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int>div;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                div.push_back(i);
                if (n / i != i) {
                    div.push_back(n / i);
                }
            }
        }
        sort(div.begin(), div.end());
        int ans;
        for (int i = 0; i < div.size(); i++) {
            // cout << div[i] << ' ' << n / div[i] << '\n';
            if (n / div[i] >= k) {
                ans = div[i];
            }
            else {
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}