/**
 *    author: A K M S Limon
 *    created: 31-January-2024  21:47:21
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> odd, even;
        for (int i = 1; i <= n; i++) {
            if (i % 2) {
                odd.push_back(i);
            }
            else {
                even.push_back(i);
            }
        }
        int cnt = (k - 1) / 2;
        if (k % 2 == 0) {
            cout << odd[odd.size() - 1] << ' ';
        }
        int i;
        for (i = 0; i < even.size() - cnt; i++) {
            cout << even[i] << ' ';
        }
        int j;
        for (i, j = 0; i < even.size(); i++, j++) {
            cout << odd[j] << ' ' << even[i] << ' ';
        }
        for (j; j < odd.size(); j++) {
            if (k % 2== 0 && j == odd.size() - 1) continue;
            cout << odd[j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}