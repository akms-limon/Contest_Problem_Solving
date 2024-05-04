/**
 *    author: A K M S Limon
 *    created: 29-April-2024  21:06:42
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        ll ans = 0;
        string s; cin >> s;
        int temp = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                temp++;
            }
            else if (temp > 0) {
                ans += temp + 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}