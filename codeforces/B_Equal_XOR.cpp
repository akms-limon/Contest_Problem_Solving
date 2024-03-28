/**
 *    author: A K M S Limon
 *    created: 16-March-2024  20:47:43
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a, b, c, d;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] == a[i + 1]) i++;
            else {
                c.push_back(a[i]);
            }
        }
        if (a[n - 1] != a[n - 2]) c.push_back(a[n - 1]);
        for (int i = 0; i < a.size() - 1; i++) {
            if (b[i] == b[i + 1]) i++;
            else {
                d.push_back(b[i]);
            }
        }
        if (b[n - 1] != b[n - 2]) d.push_back(b[n - 1]);
        for (int i = 0; i < a.size() - 1; i++) {
            if (a[i] == a[i + 1]) {
                c.push_back(a[i]);
                c.push_back(a[i + 1]);
                i++;
            }
        }
        for (int i = 0; i < a.size() - 1; i++) {
            if (b[i] == b[i + 1]) {
                d.push_back(b[i]);
                d.push_back(b[i + 1]);
                i++;
            }
        }
        for (int i = n - 1; i >= n - 2 * k; i--) {
            cout << c[i] << ' ';
        }
        cout << '\n';
        for (int i = n - 1; i >= n -  2 * k; i--) {
            cout << d[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}