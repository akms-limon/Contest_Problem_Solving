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
        int n, m, k; cin >> n >> m >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<int, int> mb;
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            mb[b[i]]++;
        }
        map<int, int> mc;
        int cnt = 0, ans = 0;
        for (int i = 0; i < m; i++) {
            mc[a[i]]++;
        }
        for (auto it : mb) {
            cnt += min(it.second, mc[it.first]);
        }
        if (cnt >= k) {
            ans++;
        }
        for (int i = 0, j = m; j < n; i++, j++) {
            int first = a[i], last = a[j];
            cnt -= min(mc[first], mb[first]);
            cnt -= min(mc[last], mb[last]);
            if (mc[first] > 0) {
                mc[first]--;
            }
            mc[last]++;
            cnt += min(mc[first], mb[first]);
            cnt += min(mc[last], mb[last]);
            if (cnt >= k) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}