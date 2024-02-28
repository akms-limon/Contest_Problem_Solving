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

    int cs = 1;
    tc{
        int n, q; cin >> n >> q;
        int a[n]; 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += (1LL * a[i] * (n - 2 * i - 1));
        }
        cout << "Case " << cs++ << ":\n";
        for (int i = 0; i < q; i++) {
            int type; cin >> type; 
            if (type) cout << sum << '\n';
            else {
                int x, y; cin >> x >> y;
                sum -= (1LL * a[x] * (n - 2 * x - 1));
                a[x] = y;
                sum += (1LL * a[x] * (n - 2 * x - 1)); 
            }
        }
    }
    return 0;
}