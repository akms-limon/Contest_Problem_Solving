/**
 *    author: A K M S Limon
 *    created: 26-September-2024  16:21:37
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        string s1, s2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '?') {
                s1.push_back('0');
                s2.push_back('9');
            }
            else {
                s1.push_back(s[i]);
                s2.push_back(s[i]);
            }
        }
        int num1 = stoi(s1);
        int num2 = stoi(s2);
        int cnt = INT_MIN, ans;
        for (int i = num1; i <= num2; i++) {
            string ss = to_string(i);
            bool bl = true;
            for (int j = 0; j < s.size(); j++) {
                if (s[j] != '?') {
                    if (s[j] != ss[j]) {
                        bl = false;
                    }
                }
            }
            if (bl) {
                if (__builtin_popcount(i) >= cnt) {
                    ans = i;
                    cnt = __builtin_popcount(i);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}