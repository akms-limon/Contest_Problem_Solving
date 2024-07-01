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
        int mx = a[0];
        for (int i = 0; i < n - 2; i++) {
            int mid = (a[i] + a[i + 1] + a[i + 2]) - min(a[i], min(a[i + 1], a[i + 2])) - max(a[i], max(a[i + 1], a[i + 2]));
            mx = max(mx, mid);
        }
        cout << mx << '\n';
    }
    return 0;
}