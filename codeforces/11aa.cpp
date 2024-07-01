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
        ll n, k; cin >> n >> k;
        ll a[n], b[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        vector<ll> v;
        v.push_back(a[0]);
        v.push_back(a[1]);
        for (ll i = 2; i < n; i++) {
            if (k > 2 && i == 2) {
                v.push_back(a[k - 1]);
            }
            if (k - 1 != i) {
                v.push_back(a[i]);
            }
        }
        ll mx = a[k - 1];
        ll cnt = 0, cnt1 = 0;
        for (ll i = 0; i < n - 1; i++) {
            if (max(a[i], a[i + 1]) == mx) {
                cnt++;
                a[i + 1] = mx;
            }
        }
        for (ll i = 0; i < n; i++) {
            if (b[i] > b[k - 1]) {
                swap(b[i], b[k - 1]);
                break;
            }
        }
        if (k > 2) {   
            ll mx1 = mx;
            for (ll i = 0; i < n - 1; i++) {
                if (max(b[i], b[i + 1]) == mx1) {
                    cnt1++;
                    b[i + 1] = mx1;
                }
            }
        }
        cout << max(cnt1, cnt) << '\n';
    }
    return 0;
}