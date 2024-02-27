/**
 *    author: A K M S Limon
 *    created: 26-February-2024  23:48:53
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int mod = 100000007;

int solve_greater_than (vector<int> e, int t) {
    int ans = 1;
    for (int i = 0; i < e.size(); i++) {
        ans = 1LL * ans * (e[i] / t + 1) % mod;
    }
    return ans;
}

int solve_equal (vector<int> e, int t) {
    return (solve_greater_than(e, t) - solve_greater_than(e, t + 1) + mod) %  mod;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, t, cs = 1; 
    while (cin >> n >> m >> t && n > 0) {
        vector<int> e;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int cnt = 0;
                while (n % i == 0) {
                    n /= i;
                    cnt++;
                }
                e.push_back(cnt * m);
            }
        }
        if (n > 1) e.push_back(m);
        cout << "Case " << cs++ << ": " << solve_equal(e, t) << '\n';
    }
    return 0;
}