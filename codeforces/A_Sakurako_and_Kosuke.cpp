/**
 *    author: A K M S Limon
 *    created: 24-October-2024  20:41:33
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n; 
        if (n % 2) cout << "Kosuke\n";
        else cout << "Sakurako\n";
    }
    return 0;
}