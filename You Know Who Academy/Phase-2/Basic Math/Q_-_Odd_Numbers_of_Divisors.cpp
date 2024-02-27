#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int>spf(N);
    for (int i = 1; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = i; j < N; j += i) {
                spf[j] = min(i, spf[j]);
            }
        }
    }

    vector<long long> v[N];
    for (int i = 1; i < N; i++) {
        int temp = i, number_of_divisors = 1;
        while (temp > 1) {
            int sd = spf[temp], cnt = 0;
            while (temp % sd == 0) {
                temp /= sd;
                cnt++;
            }
            number_of_divisors *= (2 * cnt + 1);
        }
        v[number_of_divisors].push_back(1LL * i * i);
    }

    int t; cin >> t;
    while (t--) {
        long long k, l, r; cin >> k >> l >> r;
        long long ans = upper_bound(v[k].begin(), v[k].end(), r) - lower_bound(v[k].begin(), v[k].end(), l);
        cout << ans << '\n';
    }
    return 0;
}