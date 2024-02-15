/**
 *    author: A K M S Limon
 *    created: 09-February-2024  16:58:43
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll N = 1e6 + 10;
vector<ll> primes;
ll a[N];

void generatePrimes() {
    a[0] = a[1] = 1;
    for (ll i = 2; i < N; i++) {
        if (a[i] == 0) {
            for (ll j = i * i; j < N; j+= i) {
                a[j] = 1;
            }
        }
    }
    for (ll i = 0; i < N; i++) {
        if (a[i] == 0) {
            primes.push_back(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    generatePrimes();
    ll t; cin >> t;
    ll cs = 1;
    while (t--) {
        ll n; cin >> n;
        ll cnt = 0;
        ll ans = 1;
        ll temp = n;
        for (ll i = 0; i < primes.size() && 1LL * primes[i] * primes[i] <= n; i++) {
            if (n % primes[i] == 0) {
                ll cnt = 0;
                while (n % primes[i] == 0) {
                    cnt++;
                    n/= primes[i];
                }
                ans*= (cnt + 1);
            }
        }
        if (n != 1) {
            ans*= 2;
        }
        cout << "Case " << cs << ": " << ans - 1 << '\n';
        cs++;
    }
    
    return 0;
}