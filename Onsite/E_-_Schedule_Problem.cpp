/**
 *    author: A K M S Limon
 *    created: 04-February-2024  10:31:38
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool bl = true;
        int a = INT_MIN, b = INT_MAX;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            if ((x >= a && x <= b) ||(y >= a && y <= b)) {
                a = max(a, x);
                b = min(b, y);
            } 
            else {
                bl = false;
            }
        }
        if (bl) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}