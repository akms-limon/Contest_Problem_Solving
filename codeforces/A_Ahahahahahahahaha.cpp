/**
 *    author: A K M S Limon
 *    created: 03-March-2024  00:20:58
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n - 1; i += 2) {
            if (!(a[i] & a[i + 1]) && a[i] | a[i + 1]) {
                if (a[i] == 1) a[i] = -1;
                else if (a[i + 1] == 1) a[i + 1] = -1;
                cnt++;
            }
        }
        cout << n - cnt << '\n';
        for (int i = 0; i < n; i++) {
            if (a[i] != -1) cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}