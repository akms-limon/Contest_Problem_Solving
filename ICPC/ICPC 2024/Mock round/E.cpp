/**
 *    author: A K M S Limon
 *    created: 08-November-2024  17:57:54
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double area;
    while (1) {
        cin >> area;
        if (area < 0) {
            break;
        }
        double h = sqrt(area / 3.0);
        cout << fixed << setprecision(4) << 1.0 * ((h * h * h) / 3.0) << '\n';
    }
    return 0;
}