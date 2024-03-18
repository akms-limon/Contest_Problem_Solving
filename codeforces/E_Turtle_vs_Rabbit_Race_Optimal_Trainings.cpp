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

ll solve(int n, int u) {
    // cout << n << ' ' << u << '\n';
    if (n > u) {
        int p = n - u - 1;
        return (1LL * u * (u + 1) / 2) - (1LL * p * (p + 1) / 2);
    }
    else if(n < u) {
        int p = u - n;
        return (1LL * u * (u + 1) / 2) - (1LL * (p) * (p + 1) / 2);
    }
    else {
        return (1LL * u * (u + 1) / 2);
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin >> n;
        vector<int> a;
        a.push_back(0);
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            a.push_back(x);
        }
        for (int i = 1; i <= n; i++) {
            a[i] += a[i - 1];
        }
        int q; cin >> q;
        // for (int i = 0; i < a.size(); i++) {
        //     cout << a[i] << ' ';
        // }
        // cout << '\n';
        for (int i = 0; i < q; i++) {
            int l, u; cin >> l >> u;
            int x = lower_bound(a.begin(), a.end(), u + a[l - 1]) - a.begin();
            ll ans1 = LONG_LONG_MIN;
            if (x == a.size()) x--;
            if (x > l)
            ans1 = solve(a[x - 1] - a[l - 1], u);
            ll ans2 = solve(a[x] - a[l - 1], u);
            // cout << ans1 << ' ' << ans2 << '\n';
            if (ans1 >= ans2) cout << x - 1 << ' ';
            else cout << x << ' ';
        }
        cout << '\n';
    }
    return 0;
}