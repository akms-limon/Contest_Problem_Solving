/**
 *    author: A K M S Limon
 *    created: 22-February-2024  19:29:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int n = 1e6;
int d[n + 9], ok[n + 9];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            d[j]++;
        }
    }
    for (int i = 1; i <= n; i++) {
        ok[i] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            if (d[j] % d[i] != 0) {
                ok[j] = 0;
            }
        }
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++) {
        if (ok[i] && d[i] > 3) {
            ans.push_back(i);
        }
    }
    for (int i = 107; i < ans.size(); i+= 108) {
        cout << ans[i] << '\n';
    }
    return 0;
}