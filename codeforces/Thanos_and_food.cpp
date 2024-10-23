#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e4 + 9;
bitset <N> sieve;
vector<int> primes;
vector<int> v;

void factorize() {
	sieve.set();
	sieve[0] = sieve[1] = 0;
	for (int i = 2; i * i <= N; i++) {
		if (sieve[i]) {
			primes.push_back(i);
			for (int j = i * i; j <= N; j+=i) {
				sieve[i] = 0;
			}
		}
	}
}

void finalize() {
	ll cnt = 0;
    int i = 0;
    while (cnt < N) {
    	v.push_back(primes[i]);
    	cnt += primes[i];
    	i++;
    }
}


int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cout << primes.size() << '\n';
    factorize();
    finalize();
    for (auto it : v) {
    	cout << it << ' ';
    }
    cout << '\n';
    // int t; cin >> t;
    // while (t--) {
	// 	int n; cin >> n;
    // }
    return 0;
}
