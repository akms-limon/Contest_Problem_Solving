/**
 *    author: A K M S Limon
 *    created: 28-September-2024  15:40:23
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        ll sum = 0; 
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
    }
    return 0;
}