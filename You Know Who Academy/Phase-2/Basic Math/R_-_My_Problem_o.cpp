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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = true;
        for (int i = 0; i < min(n, 21); i++) {
            bool bl = false;
            for (int j = 2; j <= i + 2; j++) {
                if (a[i] % j) {
                    bl = true;
                }
            }
            if (!bl) ok = false; 
        }
        if (ok) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}