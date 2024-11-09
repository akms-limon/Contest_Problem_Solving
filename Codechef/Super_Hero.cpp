/**
 *    author: A K M S Limon
 *    created: 06-November-2024  21:17:29
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<long long> trial_division2(long long n) {
    vector<long long> factorization;
    while (n % 2 == 0) {
        factorization.push_back(2);
        n /= 2;
    }
    for (long long d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        int cnt = 0;
        while (k > 1) {
            k /= 2;
            cnt++;
        }
        cout << trial_division2(n).size() + cnt << '\n';
    }
    return 0;
}