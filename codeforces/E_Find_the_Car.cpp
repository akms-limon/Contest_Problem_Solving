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
        ll n, k, q; cin >> n >> k >> q;
        vector<ll> a, b;
        a.push_back(0);
        b.push_back(0);
        for (ll i = 0; i < k; i++) {
            ll x; cin >> x;
            a.push_back(x);
        }
        for (ll i = 0; i < k; i++) {
            ll x; cin >> x;
            b.push_back(x);
        }
        k++;
        for (ll i = 0; i < q; i++) {
            ll point; cin >> point;
            ll temp = upper_bound(a.begin(), a.end(), point) - a.begin();
            temp--;
            ll ans = b[temp];
            if (temp < k - 1) {
                ans += floor(((long double)(b[temp + 1] - b[temp]) * (long double) (point - a[temp])) / (long double)(a[temp + 1] - a[temp]));
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}