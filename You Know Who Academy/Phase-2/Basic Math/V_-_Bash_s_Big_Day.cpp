/**
 *    author: A K M S Limon
 *    created: 24-February-2024  01:36:03
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N = 1000000;
    vector <int> spf(N + 1);
    for(int i = 1; i <= N; i++){
        spf[i] = i;
    }
    for(int i = 2; i<=N; i++){
        for(int j = i; j<=N; j+=i){
            spf[j]=min(spf[j], i);
        }
    }

    int n; cin >> n;
    map<int, int> mp;
    bool bl = true;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a > 1) bl = false;
        while (a > 1) {
            int x = spf[a];
            mp[x]++;
            while(a % x == 0) {
                a /= x;
            }
        }
    }
    int ans = INT_MIN;
    for (auto it : mp) {
        ans = max(ans, it.second);
    }
    if (bl) cout << 1 << '\n';
    else cout << ans << '\n';
    return 0;
}