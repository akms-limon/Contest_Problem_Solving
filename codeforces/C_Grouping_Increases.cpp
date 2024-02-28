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

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc {
        int n;  cin >> n;
        int a = INT_MAX, b = INT_MAX;
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (a > b) swap(a, b);
            if (x <= a) {
                a = x;
            }
            else if (x > b) {
                a = x; 
                cnt++;
            }
            else {
                b = x;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}