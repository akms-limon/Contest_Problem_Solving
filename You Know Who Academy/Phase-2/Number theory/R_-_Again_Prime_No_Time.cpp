/**
 *    author: A K M S Limon
 *    created: 12-February-2024  01:01:30
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e4 + 10;
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
    int cs = 1;
    while (t--) {
        int m, n; cin >> m >> n;
        int ans = 1e9;
        for (auto p : primes) {
            if (p > m) break;
            if (m % p == 0) {
                int e = 0;
                while (m % p == 0) {
                    e++;
                    m /= p;
                }
                int cnt = 0;
                for (int j = 1; j <= n; j++) {
                    int y = j;
                    while (y % p == 0) {
                        cnt++;
                        y /= p;
                    }
                }
                ans = min(ans, cnt / e);
            }
        }
        if (ans == 0) cout << "Case " << cs++ << ":\n" << "Impossible to divide" << '\n';
        else {
            cout << "Case " << cs++ << ":\n" << ans << '\n';
        }
    }
    return 0;
}