/**
 *    author: A K M S Limon
 *    created: 30-March-2024  20:44:52
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        if (k == 1) {
            for (int i = 1; i <= n; i++) {
                cout << i << " ";
            }
        }
        else if (k == n) {
            for (int i = 1; i <= n; i++) {
                cout << 1 << " ";
            }
        }
        else {
            cout << -1;
        }
        cout << '\n';
    }
    return 0;
}