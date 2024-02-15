/**
 *    author: A K M S Limon
 *    created: 12-February-2024  00:16:07
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(int n) {
    if (n == 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int cs = 1;
    while (t--) {
        int n; cin >> n;
        cout << "Case " << cs++ << ": " << n << " = ";
        int cnt = 0;
        for (int i = 2; i <= n; i++) {
            if (isprime(i)) {
                int expo = 0;
                for (int j = 2; j <= n; j++) {
                    int x = j;
                    while (x % i == 0) {
                        expo++;
                        x/= i;
                    }
                }
                if (cnt == 0) cnt = 1;
                else cout << " * ";
                cout << i << " (" << expo << ")";
            }
        }
        cout << '\n';
    }
    return 0;
}