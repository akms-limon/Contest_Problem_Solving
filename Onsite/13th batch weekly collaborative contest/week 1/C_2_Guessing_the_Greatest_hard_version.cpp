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
        cout << "? " << 1 << " " << n << endl;
        cin >> next;
    }
    if (smx || next != smx) {
        lo = smx, hi = n;
        while (lo < hi) {
            mid = (lo + hi + 1) / 2;
            
        }
    }
    return 0;
}