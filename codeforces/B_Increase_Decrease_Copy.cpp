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
        int n; cin >> n;
        int a[n], b[n + 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int last;
        for (int i = 0; i <= n; i++) {
            cin >> b[i];
            if (i == n) {
                last = b[i];
            }
        }
        int mx = INT_MAX;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += abs(b[i] - a[i]);
            int x = max(b[i], a[i]);
            int y = min(b[i], a[i]);
            if (last <= x && last >= y) {
                mx = 1;
            }
            else {
                mx = min(mx, abs(last - x) + 1);
                mx = min(mx, abs(last - y) + 1);
            }
        }
        cout << ans + mx << '\n';
    }
    return 0;
}