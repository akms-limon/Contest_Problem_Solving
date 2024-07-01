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
        ll n, mx, need; cin >> n >> mx >> need;
        ll cost[n];
        for (int i = 0; i < n; i++) {
            cin >> cost[i];
        }
        ll ans = 0, tax = 0;
        sort(cost, cost + n);
        for(int i = 0; i < n; i++) {
            ll temp = min(need, mx);
            ans += (temp * (cost[i] + tax));
            tax += temp;
            need -= temp;
        }
        cout << ans << '\n';
    }
    return 0;
}