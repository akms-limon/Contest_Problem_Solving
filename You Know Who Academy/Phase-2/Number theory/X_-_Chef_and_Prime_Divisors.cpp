/**
 *    author: A K M S Limon
 *    created: 12-February-2024  00:53:50
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        while(1) {
            ll gc = __gcd(a, b);
            if (gc == 1) break;
            b/= gc;
        }
        if (b == 1) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }
    return 0;
}