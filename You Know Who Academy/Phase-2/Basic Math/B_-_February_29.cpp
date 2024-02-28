/**
 *    author: A K M S Limon
 *    created: 16-February-2024  12:39:59
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int cs = 1;
    while (t--) {
        string month1, month2; cin >> month1;
        int day1, day2; cin >> day1;
        char c; cin >> c;
        int year1, year2; cin >> year1;
        cin >> month2; cin >> day2; cin >> c;
        cin >> year2;
        int ans = year2 / 4 - (year1 - 1) / 4;
        ans -= year2 / 100 - (year1 - 1) / 100;
        ans += year2 / 400 - (year1 - 1) / 400;
        if (year1 % 4 == 0) {
            if (year1 % 100 == 0) {
                if (year1 % 400 == 0) {
                    if (month1 != "January" && month1 != "February") {
                        ans--;
                    }
                }
            }
            else {
                if (month1 != "January" && month1 != "February") {
                    ans--;
                }
            }
        }
        if (year2 % 4 == 0) {
            if (year2 % 100 == 0) {
                if (year2 % 400 == 0) {
                    if (month2 == "January" || (month2 == "February" && day2 != 29)) {
                        ans--;
                    }
                }
            }
            else {
                if (month2 == "January" || (month2 == "February" && day2 != 29)) {
                    ans--;
                }
            }
        }
        cout << "Case " << cs++ << ": " << ans << '\n';
    }
    return 0;
}