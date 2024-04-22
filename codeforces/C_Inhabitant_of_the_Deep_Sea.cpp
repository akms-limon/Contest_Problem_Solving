/**
 *    author: A K M S Limon
 *    created: 08-April-2024  21:02:11
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        deque<ll> d;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            d.push_back(x);
        }
        ll cur = 0;
        while (d.size() != 1) {
            ll f = d.front(), b = d.back();
            ll lagbe;
            if (f <= b) {
                lagbe = f * 2 - 1;
                if (k < lagbe) {
                    break;
                }
                d.pop_front();
                d.pop_back();
                d.push_back(b - f);
                k--;
            }
            else {
                lagbe = b * 2;
                if (k < lagbe) {
                    break;
                }
                d.pop_back();
                d.pop_front();
                d.push_front(f - b);
            }
            k -= lagbe;
        }
        if (d.size() == 1) {
            if (d.front() <= k) {
                d.pop_back();
            }
        }
        cout << n - d.size() << '\n';
    }
    return 0;
}