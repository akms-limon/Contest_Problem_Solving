#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int ans = INT_MIN;
        for (int i = 0; i < 30; i++) {
            int cnt = 0, bl = 0;
            for (int j = 0; j < n; j++) {
                if ((a[j] >> i) & 1) {
                    cnt++;
                    ans = max(cnt, ans);
                    cnt = 0;
                    bl = 1;
                }
                else {
                    cnt++;
                }
            }
            if (bl)
            ans = max(cnt + 1, ans);
        }
        if (ans == INT_MIN) ans = 1;
        cout << ans << '\n';
    }
    return 0;
}