/**
 *    author: A K M S Limon
 *    created: 08-April-2024  20:50:08
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        ll n, c, d; cin >> n >> c >> d;
        n *= n;
        ll a[n];
        map<ll, ll> input, output;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            input[a[i]]++;
        }
        sort(a, a + n);
        int bgn = a[0];
        vector<int> v;
        for (int i = 0; i < sqrt(n); i++) {
            v.push_back(i * d + bgn);
        }
        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < sqrt(n); j++) {
                int temp = v[i] + j * c;
                output[temp]++;
            }
        }
        if (input == output) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}