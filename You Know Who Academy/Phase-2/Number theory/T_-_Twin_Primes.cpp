/**
 *    author: A K M S Limon
 *    created: 11-February-2024  09:09:33
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 2e7 + 10;
vector<int> isprime(N, 0);
vector<int> v;
vector<pair<int, int>> primes;

void sieve() {
    isprime[0] = isprime[1] = 1;
    for (int i = 0; i < N; i++) {
        if (isprime[i] == 0) {
            for(int j = i * 2; j < N; j+= i) {
                isprime[j] = 1;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        if (isprime[i] == 0) {
            v.push_back(i);
        }
    }
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] + 2 == v[i + 1]) {
            primes.push_back(make_pair(v[i], v[i + 1]));
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    sieve();
    int n; 
    while (cin >> n) {
        cout << "(" << primes[n - 1].first << ", " << primes[n - 1].second << ")\n";
    }
    return 0;
}