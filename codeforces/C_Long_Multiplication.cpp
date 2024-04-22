/**
 *    author: A K M S Limon
 *    created: 12-April-2024  21:24:06
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        string s1, s2; cin >> s1 >> s2;
        bool not_equal = false;
        int check = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i] && !not_equal) {
                if (s1[i] > s2[i]) {
                    check = 1;
                }
                else {
                    check = 2;
                }
                not_equal = true;
            }
            else if (not_equal) {
                if (check == 1) {
                    char c1 = s1[i], c2 = s2[i];
                    s1[i] = min(c1, c2);
                    s2[i] = max(c1, c2);
                }
                else {
                    char c1 = s1[i], c2 = s2[i];
                    s1[i] = max(c1, c2);
                    s2[i] = min(c1, c2);
                }
            }
        }
        cout << s1 << '\n';
        cout << s2 << '\n';
    }
    return 0;
}