/**
 *    author: A K M S Limon
 *    created: 30-January-2024  01:22:45
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        int n, k, m; cin >> n >> k >> m;
        string s; cin >> s;
        map<char, int> mp;
        for (int i = s.size() - 1; i >= 0; i--) {
            mp[s[i]] = i + 1;
        }
        bool bl = true, p = true;
        char c, cc;
        for (char j = 'a'; j < 'a' + k; j++) {
            cc = j;
            map<char, int> cnt;
            if (mp[j] == 0) {
                p = false;
                goto here;
            }
            for (int i = mp[j]; i < s.size(); i++) {
                cnt[s[i]]++;
            }
            char temp = 'a';
            for (char i = temp; i < 'a' + k; i++) {
                if (cnt[i] < n - 1) {
                    bl = false;
                    c = i;
                    goto here;
                }
            }
        }
        here:
        if (!p) {
            for (int i = 0; i < n; i++) {
                cout << cc;
            }
            cout << '\n';
        }
        else {
            if (bl) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
                cout << cc;
                for (int i = 0; i < n - 1; i++) {
                    cout << c;
                }
                cout << '\n';
            }
        }
    }
    return 0;
}