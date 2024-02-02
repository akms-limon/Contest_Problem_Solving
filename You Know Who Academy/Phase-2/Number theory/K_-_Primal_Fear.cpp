/**
 *    author: A K M S Limon
 *    created: 28-January-2024  00:50:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6;
vector<int> v(N, 1);
vector<int> isprime(N);

bool is_zero(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            return true;
        }
    }
    return false;
}

bool is_afraid(int n) {
    string s = to_string(n);
    while (s.size() > 1) {
        if (!isprime[stoi(s)]) {
            return false;
        }
        s = s.substr(1, s.size() - 1);
    }
    if (!isprime[stoi(s)]) {
        return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    v[0] = 0, v[1] = 0;
    for (int i = 2; i * i <= N; i++) {
        if (v[i] == 1) {
            for (int j = i * i; j <= N; j+=i) {
                v[j] = 0;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        isprime[i] = v[i];
    }

    for (int i = 0; i < N; i++) {
        if (v[i] == 1) {
            if (is_zero(i)) {
                v[i] = 0;
            }
            else {
                if (!is_afraid(i)) {
                    v[i] = 0;
                }
            }
        }
    }

    for (int i = 1; i < N; i++) {
        v[i] += v[i - 1];
    }
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << v[n] << '\n';
    }
      
    return 0;
}