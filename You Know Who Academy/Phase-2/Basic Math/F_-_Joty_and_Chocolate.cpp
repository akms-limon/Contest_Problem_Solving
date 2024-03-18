/**
 *    author: A K M S Limon
 *    created: 14-March-2024  00:50:13
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, a, b, c, d; 
    cin >> n >> a >> b >> c >> d;
    ll ans = (n / a) * c + (n / b) * d;
    ans -= (((n / ((a * b) / __gcd(a, b))) * min(c, d)));
    cout << ans << '\n';
    return 0;
}