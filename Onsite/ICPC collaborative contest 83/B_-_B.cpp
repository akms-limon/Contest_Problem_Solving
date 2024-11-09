/**
 *    author: A K M S Limon
 *    created: 25-October-2024  15:30:42
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    bool bl = false;
    for (int i = 0; i < n - 3; i++) {
        int xr = 0;
        for (int j = i; j <= i + 3; j++) {
            xr ^= a[j];
        }
        if (xr == 0) {
            bl = true;
        }
    }
    if (bl) {
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
    return 0;
}