/**
 *    author: A K M S Limon
 *    created: 09-November-2024  17:52:10
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    int cs = 1;
    while (t--) {
        ll n, k; cin >> n >> k;
        if(n==1) {
            if (k == 1) cout << "Case " << cs++ << ": " << "Evenius" << '\n';
            else cout << "Case " << cs++ << ": " << "Oddius" << '\n';
        }
        else if(n%2) {
            if((n/2)%2==0 && k==2)  cout << "Case " << cs++ << ": " << "Evenius" << '\n';
            else cout << "Case " << cs++ << ": " << "Oddius" << '\n';
        }
        else cout << "Case " << cs++ << ": " << "Oddius" << '\n';
    }
    return 0;
}