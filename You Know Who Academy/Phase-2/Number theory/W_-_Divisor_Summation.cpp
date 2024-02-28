/**
 *    author: A K M S Limon
 *    created: 11-February-2024  23:00:45
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 5e5 + 10;
ll sum[N];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 1; i < N; i++) {
        for (int j = i * 2; j < N; j+= i) {
            sum[j] += i;
        }
    }
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << sum[n] << '\n';
    }
    return 0;
}