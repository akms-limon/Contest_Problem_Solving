/**
 *    author: A K M S Limon
 *    created: 12-February-2024  01:01:30
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 1e9 + 7;
const int N = 5e4 + 10;
vector<int> isprime(N);
vector<int> primes;

void sieve() {
    isprime[0] = isprime[1] = 1;
    for (int i = 2; i < N; i++) {
        if (isprime[i] == 0) {
            for (int j = i * 2; j < N; j+= i) {
                isprime[j] = 1;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (isprime[i] == 0) {
            primes.push_back(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    sieve();
    int t; cin >> t; 
    while (t--) {   // this problem will be solved by spf also
        int n; cin >> n;
        ll ans = 1;
        for (auto p : primes) {
            if (p > n) break;
            ll e = 0;
            for (int i = p; i <= n; i+= p) {
                int x = i;
                while (x % p == 0) {
                    x /= p;
                    e++;
                }
            }
            ans = 1LL * ans * (e + 1) % mod;
        }
        cout << ans << '\n';
    }
    return 0;
}