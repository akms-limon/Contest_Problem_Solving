#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    long double N = 1000000 + 10;
    vector<double> lg(N);
    for (double i = 1; i < N; i++) {
        lg[i] = log(i);
    }
    for (int i = 1; i < N; i++) {
        lg[i] += lg[i - 1];
    }
    int t, cs = 1; cin >> t;
    while (t--) {
        double n; cin >> n;
        if (n == 0) cout << "Case " << cs++ << ": " << 1 << '\n';
        else {
            cout << "Case " << cs++ << ": " << int32_t((lg[n] / log(10)) + 1) << '\n';
        }
    }
    return 0;
}
