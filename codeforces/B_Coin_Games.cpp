/**
 *    author: A K M S Limon
 *    created: 30-April-2024  22:16:31
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'U') {
                cnt++;
            }
        }
        while (cnt > 0) {
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == 'U') {
                    if (s.size() == 1) {
                        s.erase();
                    }
                    else if (s.size() == 2) {
                        s.erase(s.begin() + i);
                    }
                    else {
                        if (i == 0 || i == s.size() - 1) {
                            s.erase(s.begin() + i);
                            if (s[0] == 'D') {
                                s[0] = 'U';
                            }
                            else {
                                s[0] = 'D';
                            }
                            if (s[s.size() - 1] == 'D') {
                                s[s.size() - 1] = 'U';
                            }
                            else {
                                s[s.size() - 1] = 'D';
                            }
                        }
                        else {
                            if (s[i + 1] == 'U') {
                                s[i + 1] = 'D';
                            }
                            else {
                                s[i + 1] = 'U';
                            }
                            if (s[i - 1] == 'U') {
                                s[i - 1] = 'D';
                            }
                            else {
                                s[i - 1] = 'U';
                            }
                            s.erase(s.begin() + i);
                        }
                    }
                    break;
                }
            }
            cnt = 0;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == 'U') {
                    cnt++;
                }
            }
            ans++;
        }
        if (ans % 2) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}