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
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        ll v[n + 1];
        memset(v, 0, sizeof(v));
        for (int i = 0; i < n; i++) {
            v[abs(b[i])] += a[i];
        }
        bool bl = true;
        ll curr = k;
        for (int i = 1; i <= n; i++) {
            if (v[i] > curr) bl = false;
            else {
                curr -= v[i];
                curr += k;
            }
        }
        if (bl) yes;
        else no;
    }
    return 0;
}