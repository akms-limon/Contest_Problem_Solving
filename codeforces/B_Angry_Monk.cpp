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
        ll n, k; cin >> n >> k;
        ll a[k];
        ll total = 0, mx = 1;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
            mx = max(a[i], mx);
            if (a[i] > 1) {
                total += a[i] - 1;
            }
        }
        total -= mx - 1;
        total += (n - mx);
        cout << total << '\n';
    }
    return 0;
}