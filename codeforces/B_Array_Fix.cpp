/**
 *    author: A K M S Limon
 *    created: 15-March-2024  20:47:35
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> v;
        v.push_back(a[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            if (v[v.size() - 1] < a[i]) {
                while (a[i]) {
                    v.push_back(a[i] % 10);
                    a[i] /= 10;
                }
            }
            else {
                v.push_back(a[i]);
            }
        }
        bool bl = true;
        reverse(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++) {
            if (v[i] < v[i - 1]) {
                bl = false;
            }
        }
        if (bl) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}