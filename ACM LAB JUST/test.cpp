/**
 *    author: A K M S Limon
 *    created: 26-March-2024  15:36:32
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> v;
    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    int ans = upper_bound(v.begin(), v.end(), 16) - v.begin();
    cout << ans << '\n';
    return 0;
}