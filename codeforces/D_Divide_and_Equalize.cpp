/**
 *    author: A K M S Limon
 *    created: 06-February-2024  02:03:20
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6 + 10;
vector<int> spf(N, 0);

void createSpf() {
    for (int i = 1; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = i; j < N; j+= i) {
                spf[j] = min(spf[j], i);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    createSpf();
    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        vector<int> primes;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            while (a % spf[a] == 0 && a > 1) {
                primes.push_back(spf[a]);
                a/= spf[a];
            }
        }
        bool bl = true;
        sort(primes.begin(), primes.end());
        while (primes.size()) {
            int c = primes.back();
            int cnt = 0;
            while (primes.back() == c) {
                primes.pop_back();
                cnt++;
            }
            if (cnt % n != 0) {
                bl = false;
            }
        }
        if (bl) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}