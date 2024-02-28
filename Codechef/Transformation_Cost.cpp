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
        ll n; cin >> n;
        ll temp = n;
        ll ans = 0, last_zero = -1, first_one = -1, last_one = -1;
        int j = 0;
        while (temp) {
            if ((n >> j) & 1) {
                if (first_one == -1)
                    first_one = j;
                last_one = j;
            }
            else {
                last_zero = j;
            }
            temp>>=1;
            j++;
        }
        if (last_zero > first_one && last_zero < last_one) {
            for (int i = first_one; i < last_one; i++) {
                if (((n >> i) & 1) == 0) {
                    ans += (1 << i);
                }
            }
            ans -= (1 << last_zero);
            ans += (1 << first_one);
        }
        cout << ans << '\n';
    }
    return 0;
}