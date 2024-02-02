/**
 *    author: A K M S Limon
 *    created: 30-January-2024  02:28:09
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ncr(ll n, ll r) {
    ll sum = 1;
    for(int i = 1; i <= r; i++){
        sum = sum * (n - r + i) / i;
    }
    return sum;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll a[n];
        map<ll, ll>mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = ncr(n, 3);
        ll cnt = 0;
        int i = 0;
        for (auto it : mp) {
            if (i==0) {
                cnt+= it.second;
                i++;
                continue;
            }
            ans -= (ncr(cnt, 2) * it.second);
            cnt+=it.second;
        }
        cout << ans << '\n';
    }
    return 0;
}