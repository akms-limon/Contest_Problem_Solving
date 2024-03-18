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
        int n, q; cin >> n >> q;
        int a[n];
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ans += (2 * a[i]);
        }
        while (q--) {
            int x; cin >> x;
            bool bl = false;
            int l, r;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (i != j) {
                        if (ans - a[i] - a[j] == x) {
                            l = i, r = j;
                            bl = true;
                            goto here;
                        }
                    }
                }
            }
            here:
            if (bl) {
                cout << a[l] << ' ';
                for (int i = 0; i < n; i++) {
                    if (i != l && i != r)
                    cout << a[i] << ' ';
                }
                cout << a[r];
                cout << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}