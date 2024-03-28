/**
 *    author: A K M S Limon
 *    created: 02-March-2024  12:27:36
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int ans = 0, dis = INT_MAX;
    bool z = false, o = false, check_zero = false, check_one = false;
    while (n--) {
        string s; cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                zero++;
                check_zero = true;
            }
            else {
                one++;
                check_one = true;
            }
        }
        if (one <= zero) o = true;
        if (zero <= one) z = true;
        dis = min(dis, abs(zero - one));
        ans += min(zero, one);
    }
    if (o == false || z == false) ans += dis;
    if (check_one == false || check_zero == false) {
        cout << 0 << '\n';
    }
    else {
        cout << ans << '\n';
    }
    return 0;
}