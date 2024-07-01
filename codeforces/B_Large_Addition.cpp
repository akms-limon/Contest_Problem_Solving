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
        ll n; cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll c = 0;
        for (ll i = 0; i < n; i++) {
            if (a[i] >= 0) {
                while (a[i] >= 0 && i < n) {
                    c += a[i];
                    i++;
                }
                i--;
            }
            else {
                int x = c;
                int y = c;
                while (a[i] < 0 && i < n) {
                    x += a[i];
                    y += a[i];
                    i++;
                    x = abs(x);
                }
                i--;
                y = abs(y);
            }
        }
        cout << c << '\n';
    }
    return 0;
}