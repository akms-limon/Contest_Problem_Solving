/**
 *    author: A K M S Limon
 *    created: 30-August-2024  20:40:16
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int cnt = 0;
        for (int i = a; i <= b; i++) {
            if (i % 2) {
                cnt++;
            }
        }
        cout << cnt / 2 << '\n';
    }
    return 0;
}