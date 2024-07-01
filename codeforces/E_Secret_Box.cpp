#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        ll x, y, z, k; cin >> x >> y >> z >> k;
        ll a = 1, b = 1, c = k, mx = LONG_LONG_MAX, ans = 1;
        bool fi = false;
        for (ll i = 1; i <= x; i++) {
            for (ll j = 1; j <= y; j++) {
                if (k % (i * j) == 0) {
                    a = i, b = j, c = k / (i * j);
                    vector<ll> v1, v2;
                    v1.push_back(x);
                    v1.push_back(y);
                    v1.push_back(z);
                    v2.push_back(a);
                    v2.push_back(b);
                    v2.push_back(c);
                    sort(v1.begin(), v1.end());
                    sort(v2.begin(), v2.end());
                    ll ans2 = 1;
                    bool bl = true;
                    for (ll i = 0; i < 3; i++) {
                        if (v2[i] > v1[i]) {
                            bl = false;
                        }
                        ll temp = (abs(v1[i] - v2[i]) + 1);
                        ans2 *= temp;
                    }
                    if (bl) {
                        fi = true;
                        ans = max(ans, ans2);
                    }
                }
            }
        }
        if (!fi) cout << 0 << '\n';
        else cout << ans << '\n';
    }
    return 0;
}