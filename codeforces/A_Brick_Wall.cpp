/**
 *    author: A K M S Limon
 *    created: 30-January-2024  20:43:13
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        cout << a * (b / 2) << '\n';
    }
    return 0;
}