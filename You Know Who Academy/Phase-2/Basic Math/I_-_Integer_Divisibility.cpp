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
        ll n, k; cin >> n >> k;
        ll ans = k % n;
        int i;
        for (i = 1; i < 10e6; i++) {
            if (ans == 0) {
                break;
            }
            ans = (ans * 10 + k) % n;
        }
        cout << "Case " << cs++ << ": " << i << '\n';
    }
    return 0;
}