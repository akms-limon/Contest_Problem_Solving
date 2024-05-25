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
        int n, k; cin >> n >> k;
        int pb, ps; cin >> pb >> ps;
        int p[n + 1], a[n + 1], q[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
            q[i] = p[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int x = pb;
        ll ans1 = 1LL * k * a[x], sum = 0;
        int op = 0;
        while (p[x] != x && p[x] != -1) {
            ans1 = max(ans1, sum + 1LL * (k - op) * a[x]);
            sum += a[x];
            int temp = p[x];
            p[x] = -1;
            x = temp;
            op++;
            if (op >= k) {
                break;
            }
        }
        x = ps;
        ll ans2 = 1LL * k * a[x];
        sum = 0;
        op = 0;
        while (q[x] != x && q[x] != -1) {
            ans2 = max(ans2, sum + 1LL * (k - op) * a[x]);
            sum += a[x];
            int temp = q[x];
            q[x] = -1;
            x = temp;
            op++;
            if (op >= k) {
                break;
            }
        }
        if (ans1 > ans2) {
            cout << "Bodya" << '\n';
        }
        else if (ans2 > ans1) {
            cout << "Sasha" << '\n';
        }
        else {
            cout << "Draw" << '\n';
        }
    }
    return 0;
}