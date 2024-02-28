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
        ll n, q; cin >> n >> q;
        ll a[n + 1];
        a[0] = 0;
        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
        }
        ll pre[n + 1];
        memset(pre, 0, sizeof(pre));
        for (ll i = 1; i <= n; i++) {
            if (a[i] == 1) {
                pre[i]++;
            }
        }
        for (ll i = 1; i <= n; i++) {
            pre[i] += pre[i - 1];
            a[i] += a[i - 1];
        }
        for (ll i = 0; i < q; i++) {
            ll l, r; cin >> l >> r;
            if (l == r) no;
            else {
                ll dis = r - l + 1, one = pre[r] - pre[l - 1];
                ll sum = a[r] - a[l - 1];
                sum -= (2 * one);
                dis -= one;
                if (sum >= dis) yes;
                else no;
            }
        }
    }
    return 0;
}