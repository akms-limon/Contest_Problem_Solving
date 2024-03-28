/**
 *    author: A K M S Limon
 *    created: 15-March-2024  12:31:08
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double a, b; cin >> a >> b;
    double x = (b * log(a));
    double y = (a * log(b));
    double c = x - y;
    if (c < 0) cout << "<" << '\n';
    else if (c > 0) cout << ">" << '\n';
    else cout << "=" << '\n';
    return 0;
}