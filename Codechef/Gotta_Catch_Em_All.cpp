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
        int n, x, y; cin >> n >> x >> y;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int p; cin >> p;
            if (p * x < y) ans += (p * x);
            else ans += y;
        }
        cout << ans << '\n';
    }
    return 0;
}