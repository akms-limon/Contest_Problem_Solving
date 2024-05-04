/**
 *    author: A K M S Limon
 *    created: 30-April-2024  20:39:57
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

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
        sort(a, a + n);
        sort(b, b + n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] >= a[cnt]) {
                cnt++;
            }
        }
        cout << n - cnt << '\n';
    }
    return 0;
}