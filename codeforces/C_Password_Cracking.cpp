/**
 *    author: A K M S Limon
 *    created: 20-September-2024  21:00:04
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; 
        bool fnt = 0;
        for (int i = 0; i < 2*n; i++) {
            if (fnt) {
                string temp;
                temp.push_back('0');
                for (int i = 0; i < s.size(); i++) {
                    temp.push_back(s[i]);
                }
                s = temp;
            }
            else {
                s.push_back('0');
            }
            cout << '?' << ' ' << s << endl;
            bool check; cin >> check;
            if (check == 1) {
                if (s.size() == n) {
                    break;
                }
                continue;
            }
            else {
                if (fnt == 1) {
                    s[0] = '1';
                    if (s.size() == n) {
                        break;
                    }
                    continue;
                }
                else {
                    s.pop_back();
                    s.push_back('1');
                }
                cout << '?' << ' ' << s << endl;
                bool again; cin >> again;
                if (again == 1) {
                    if (s.size() == n) {
                        break;
                    }
                    continue;
                }
                else {
                    s.pop_back();
                    fnt = 1;
                }
            }
            if (s.size() == n) {
                break;
            }
        }
        cout << '!' << ' ' << s << endl;
    }
    return 0;
}