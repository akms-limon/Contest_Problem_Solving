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
        int a[n], b[n], c[n], d[n];
        vector<pair<int, int>> v;
        int mx = INT_MIN, lav = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[i] = a[i];
            mx = max(mx, a[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            d[i] = b[i];
            v.push_back(make_pair(a[i], b[i]));
        }
        int index = -1;
        int contribute;
        for (int i = 0; i < n; i++) {
            if (b[i] >= mx) {
                contribute = mx - a[i];
                if (contribute > lav) {
                    lav = contribute;
                    index = i;
                }
            }
            else {
                contribute = (b[i] - a[i]);
                if (contribute > lav) {
                    index = i;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (i == index) {
                swap(a[i], b[i]);
            }
        }
        ll ans = 0, ans2 = 0;
        sort (a, a + n);
        for (int i = 1; i < n - 1; i++) {
            ans+= a[i];
        }
        swap(c[0], d[0]);
        sort(c, c + n);
        for (int i = 1; i < n - 1; i++) {
            ans2+= c[i];
        }
        cout << max(ans, ans2) << '\n';
    }
    return 0;
}