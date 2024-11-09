#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define nn "\n"
#define mod 1000000007
#define N 100005

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, i, j = 1, k = 1, g = 0;
    cin >> n; ll a[n];
    for (i = 0; i < n; i++)
        cin >> a[i];
    vector<int> v;
    for (i = 0; i < n; i++) {
        g = __gcd(g, a[i]);
        if (g == 1) {
            k = max(k, j);
            if (a[i] == 1) {
                g = 0, j = 1;
                continue;
            }
            g = a[i]; j = 2;
            ll j1 = 1;
            while (i - j1 >= 0 && __gcd(g, a[i - j1]) > 1) {
                g = __gcd(g, a[i - j1]);
                j1++, j++;
            }
            k = max(k, j);
            v.push_back(k);
        }
        else {
            j++, k = max(j, k);
            v.push_back(k);
        }
    }
    for (auto it : v) {
        cout << it << ' ';
    }
    cout << '\n';
    cout << k << nn;
    return 0;
}