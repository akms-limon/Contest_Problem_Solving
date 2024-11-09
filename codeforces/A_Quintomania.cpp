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

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n; cin >> n;
        int a[n];
        bool bl = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i) {
                int p = abs(a[i] - a[i - 1]);
                if (!(p == 5 || p == 7)) bl = false;
            }
        }
        if (bl) yes;
        else no;
    }
    return 0;
}