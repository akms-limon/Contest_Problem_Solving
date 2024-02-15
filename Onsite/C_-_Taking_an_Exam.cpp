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
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        ll ans = 0, mn = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] + mn <= m) {
                mn+= a[i];
                ans += (a[i] + 1);
            }
        }
        cout << ans + m - mn << '\n';
    }
    return 0;
}