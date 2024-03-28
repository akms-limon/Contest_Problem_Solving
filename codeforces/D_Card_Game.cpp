/**
 *    author: A K M S Limon
 *    created: 23-March-2024  23:57:22
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        char c; cin >> c;
        map<char, int> mp;
        vector<string> C, D, H, S, pp;
        for (int i = 0; i < 2 * n; i++) {
            string s; cin >> s;
            mp[s[1]]++;
            if(s[1] == c) pp.push_back(s);
            else if (s[1] == 'C') C.push_back(s);
            else if (s[1] == 'D') D.push_back(s);
            else if (s[1] == 'H') H.push_back(s);
            else S.push_back(s);
        }
        sort(C.begin(), C.end());
        sort(D.begin(), D.end());
        sort(H.begin(), H.end());
        sort(S.begin(), S.end());
        sort(pp.begin(), pp.end());
        int bonus = 0, cnt = 0;
        for (auto it : mp) {
            if (it.first == c) {
                bonus = it.second;
            }
            else if (it.second % 2) {
                cnt++;
            }
        }
        if (cnt > bonus) {
            cout << "IMPOSSIBLE" << '\n';
        }
        else {
            for (int i = C.size() - 1; i > 0; i -= 2) {
                if (c == 'C') break;
                cout << C[i - 1] << ' ' << C[i] << '\n';
                C.pop_back();
                C.pop_back();
            }
            for (int i = D.size() - 1; i > 0; i -= 2) {
                if (c == 'D') break;
                cout << D[i - 1] << ' ' << D[i] << '\n';
                D.pop_back();
                D.pop_back();
            }
            for (int i = H.size() - 1; i > 0; i -= 2) {
                if (c == 'H') break;
                cout << H[i - 1] << ' ' << H[i] << '\n';
                H.pop_back();
                H.pop_back();
            }
            for (int i = S.size() - 1; i > 0; i -= 2) {
                if (c == 'S') break;
                cout << S[i - 1] << ' ' << S[i] << '\n';
                S.pop_back();
                S.pop_back();
            }
            if (c != 'C') {
                if (C.size() == 1) {
                    cout << C[0] << ' ' << pp[pp.size() - 1] << '\n';
                    pp.pop_back();
                }
            }
            if (c != 'D') {
                if (D.size() == 1) {
                    cout << D[0] << ' ' << pp[pp.size() - 1] << '\n';
                    pp.pop_back();
                }
            }
            if (c != 'H') {
                if (H.size() == 1) {
                    cout << H[0] << ' ' << pp[pp.size() - 1] << '\n';
                    pp.pop_back();
                }
            }
            if (c != 'S') {
                if (S.size() == 1) {
                    cout << S[0] << ' ' << pp[pp.size() - 1] << '\n';
                    pp.pop_back();
                }
            }
            for (int i = 0; i < (int)pp.size() - 1; i += 2) {
                cout << pp[i] << ' ' << pp[i + 1] << '\n';
            }
        }
    }
    return 0;
}