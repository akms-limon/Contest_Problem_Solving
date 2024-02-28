#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc ll t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

ll bitsettoint(bitset<63> x) {
    ll a = 0;
    for (ll i = 0; i < 63; i++) {
        if (x[i] == 1) {
            a |= (1LL << i);
        }
    }
    return a;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        ll a, b, r;
        cin >> a >> b >> r;
        if (b > a) swap(a, b);
        bitset<63> x(a), y(b), z(r);
        ll last = 0;
        for (ll i = 0; i < 63; i++) {
            if (x[i] == 1 && y[i] == 0) {
                last = i;
            }
        }
        ll k = 0;
        for (ll i = 62; i >= 0; i--) {
            if (x[i] == 1 && y[i] == 0 && i != last) {
                k |= (1LL << i);
                if (k > r) {
                    k ^= (1LL << i);
                    continue;
                }
                x[i] = 0, y[i] = 1;
            }
        }
        ll p = bitsettoint(x), q = bitsettoint(y);
        cout << abs(p - q) << '\n';
    }
    return 0;
}