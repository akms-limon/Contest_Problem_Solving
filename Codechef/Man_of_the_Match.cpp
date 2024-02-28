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
        int prev = -1, ans;
        for (int i = 1; i <= 22; i++) {
            int a, b; cin >> a >> b;
            if (a + b * 20 > prev) {
                prev = a + b * 20;
                ans = i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}