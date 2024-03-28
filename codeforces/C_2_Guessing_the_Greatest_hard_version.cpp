/**
 *    author: A K M S Limon
 *    created: 12-March-2024  10:37:03
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    cout << "? " << 1 << " " << n << endl;
    int smx; cin >> smx;
    int next, lo, hi, mid;
    if (smx != 1) {
        cout << "? " << 1 << " " << smx << endl;
        cin >> next;
    }
    if (smx == 1 || next != smx) {
        lo = smx + 1, hi = n;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            cout << "? " << smx << " " << mid << endl;
            int temp; cin >> temp;
            if (temp == smx) {
                hi = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        cout << "! " << lo << endl;
    }
    else {
        lo = 1, hi = smx - 1;
        while (lo < hi) {
            mid = (lo + hi + 1) / 2;
            cout << "? " << mid << " " << smx << endl;
            int temp; cin >> temp;
            if (temp == smx) {
                lo = mid;
            }
            else {
                hi = mid - 1;
            }
        }
        cout << "! " << lo << endl;
    }
    return 0;
}