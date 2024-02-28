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

ll number_of_zeros(ll n) {
    ll cnt = 0;
    while (n) {
        cnt += n/5;
        n /= 5;
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cs = 1;
    tc{
        ll n; cin >> n;
        ll lo = 1, hi = 5 * 1e8, mid, ans = -1;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            ll zeros = number_of_zeros(mid);
            if (zeros == n) {
                ans = mid;
                hi = mid;
            }
            else if (zeros > n) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        if (ans == -1) cout << "Case " << cs++ << ": impossible" << '\n';
        else cout << "Case " << cs++ << ": " << ans << '\n';
    }
    return 0;
}