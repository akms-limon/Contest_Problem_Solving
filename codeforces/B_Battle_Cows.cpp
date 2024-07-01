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

ll ans(vector<int> a, ll n, ll mx) {
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        if (max(a[i], a[i + 1]) == mx) {
            cnt++;
            a[i + 1] = mx;
        }
        if (max(a[i], a[i + 1]) > mx) {
            break;
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        ll n, k; cin >> n >> k;
        vector<int> a;
        for (ll i = 0; i < n; i++) {
            int p; cin >> p;
            a.push_back(p);
        }
        ll mx = a[k - 1];
        int cnt = 0, f = 0, s = n;
        bool bl1 = true, bl2 = true;
        for (int i = 0; i < n; i++) {
            if (a[i] > mx) {
                cnt++;
            }
            if (cnt == 1 && bl1) {
                f = i;
                bl1 = false;
            }
            if (cnt == 2 && bl2) {
                s = i;
                bl2 = false;
            }
        }
        ll x = ans(a, n, mx);
        swap(a[0], a[k - 1]);
        x = max(ans(a, n, mx), x);
        swap(a[0], a[k - 1]);
        swap(a[k - 1], a[f]);
        x = max(ans(a, n, mx), x);
        cout << x << '\n';
    }
    return 0;
}