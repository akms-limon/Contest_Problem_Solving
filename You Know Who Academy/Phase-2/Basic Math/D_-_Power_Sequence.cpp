/**
 *    author: A K M S Limon
<<<<<<< HEAD
 *    created: 28-February-2024  11:27:33
**/
=======
 *    created: 02-March-2024  07:41:52
 **/
>>>>>>> be5199954db1d5caed1999d4226d2a9eec65c1dd
#include <bits/stdc++.h>
#define ll long long
using namespace std;

<<<<<<< HEAD
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < 1000000000; i++) {
        
    }
=======
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    bool bl = false;
    ll ans = LONG_LONG_MAX;
    ll mx = 1e14;
    for (ll c = 1; c <= 1000000; c++) {
        ll p = 1, next = 0;
        bool flag = true;
        for (ll i = 0; i < n; i++) {
            if (p > mx) {
                flag = false;
                break;
            }
            next += abs(a[i] - p);
            p *= c;
        }
        if (flag) {
            ans = min(ans, next);
        }
    }
    cout << ans << '\n';
>>>>>>> be5199954db1d5caed1999d4226d2a9eec65c1dd
    return 0;
}