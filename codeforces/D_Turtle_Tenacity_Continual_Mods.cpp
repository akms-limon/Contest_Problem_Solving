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
        int n; cin >> n;
        int a[n];
        int mn = INT_MAX;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        sort(a, a + n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == mn) cnt ++;
        }
        if (cnt == 1) cout << "YES" << '\n';
        else {
            bool bl = false;
            for (int i = 0; i < n; i++) {
                if (a[i] % mn < mn && a[i] % mn) {
                    bl = true;
                }
            }
            if (bl) cout << "YES" << '\n';
            else cout << "NO" << '\n';
        }
    }
    return 0;
}