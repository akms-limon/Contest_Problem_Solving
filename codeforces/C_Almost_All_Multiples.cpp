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
        int n, x; cin >> n >> x;
        if (n % x) {
            cout << -1 << '\n';
        }
        else {
            int a[n + 1];
            for (int i = 2; i < n; i++) {
                a[i] = i;
            }
            a[1] = x, a[n] = 1;
            int p = x;
            for (int i = x * 2; i <= n; i+= p) {
                if (n % i == 0) {
                    a[p] = i;
                    p = i;
                }
            }
            for (int i = 1; i <= n; i++) {
                cout << a[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}