/**
 *    author: A K M S Limon
 *    created: 02-March-2024  22:05:51
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int l = 1, h = 1000000, mid;
    while (l < h) {
        mid = (l + h + 1) / 2;
        cout << mid << endl;
        string s; cin >> s;
        if (s == ">=") {
            l = mid;
        }
        else {
            h = mid - 1;
        }
    }
    cout << "! " << l << endl;
    return 0;
}