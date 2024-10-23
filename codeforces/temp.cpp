/**
 *    author: A K M S Limon
 *    created: 20-October-2024  16:02:47
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> v;
    int x = 13;
    for (int i = 0; i < 10; i++) {
        v.push_back(x++);
    }
    sort(v.begin(), v.end());
    cout << upper_bound(v.begin(), v.end(), 14) - v.begin();
    return 0;
}