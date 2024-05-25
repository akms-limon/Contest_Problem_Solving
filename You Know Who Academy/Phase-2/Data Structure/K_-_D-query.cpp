/**
 *    author: A K M S Limon
 *    created: 03-May-2024  13:08:10
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int q; cin >> q;
    vector<vector<pair<int, int>>> Q;
    for (int i = 1; i <= n; i++) {
        int l, r;
        cin >> l >> r;
        Q[r].push_back({l, i});
    }
    for (int i = 1; i <= n; i++) {
        
    }
    return 0;
}