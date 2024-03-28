/**
 *    author: A K M S Limon
 *    created: 26-March-2024  14:37:21
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, m; 
    int cs = 1;
    while(cin >> n >> m) {
        int a[m];
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        ll ans;
        for (int i = 1; i < 100000; i++) {
            ans = n * i;
            ll temp = ans;
            bool bl = true;
            while (temp) {
                int ses = temp % 10;
                for (int i = 0; i < m; i++) {
                    if (ses == a[i]) {
                        bl = false;
                    }
                }
                temp /= 10;
            }
            if (bl) {
                cout << "Case " << cs++ << ": " << ans << '\n';
                goto here;
            }
        }
        cout << "Case " << cs++ << ": " << -1 << '\n';
        here : ;
    }
    return 0;
}