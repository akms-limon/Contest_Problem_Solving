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

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        ll n; cin >> n;
        ll a[n];
        ll mx = LONG_LONG_MIN;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        ll lcm = a[0];
        bool bl = false;
        for (ll i = 1; i < n; i++) {
            lcm = (a[i] * lcm) / (__gcd(a[i], lcm));
            if (lcm > mx) {
                bl = true;
            }
        }
        sort(a, a + n);
        if (bl) {
            cout << n << '\n';
        }
        else {
            vector<ll> div;
            for (ll i = 1; i <= sqrt(lcm); i++) {
                if (lcm % i == 0) {
                    div.push_back(i);
                    div.push_back(lcm / i);
                }
            }
            ll ans = 0;
            for (ll i = 0; i < div.size(); i++) {
                ll cnt = 0, lcm1 = 0;
                for (ll j = 0; j < n; j++) {
                    if (div[i] % a[j] == 0) {
                        if (lcm1 == 0) {
                            lcm1 = a[j];
                        }
                        else {
                            lcm1 = (lcm1 * a[j]) / __gcd(a[j], lcm1);
                        }
                        cnt++;
                    }
                    if (a[j] == div[i]) {
                        cnt = 0;
                        break;
                    }
                }
                if (lcm1 == div[i])
                ans = max(ans, cnt);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}