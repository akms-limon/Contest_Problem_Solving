/**
 *    author: A K M S Limon
 *    created: 13-April-2024  21:01:14
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
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int ans = 0;
        for (auto it : mp) {
            if(it.second == 2) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}