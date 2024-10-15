/**
 *    author: A K M S Limon
 *    created: 26-September-2024  16:02:46
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool bl = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                int a, b, c; cin >> a >> b >> c;
                if (j >= 0 && j <= 2) {
                    if(!(a == 2 && b == 3 && c == 10)) {
                        bl = false;
                    }
                }
                else if (j == 3) {
                    if(!(a == 1 && b == 3 && c == 10)) {
                        bl = false;
                    }
                }
                else if (j == 4) {
                    if(!(a == 3 && b == 3 && c == 10)) {
                        bl = false;
                    }
                }
            }
        }
        if (bl) {
            cout << "Consistent" << '\n';
        }
        else {
            cout << "Inconsistent" << '\n';
        }
    }
    return 0;
}