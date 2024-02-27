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
        int i = 0;
        while(a[i] == 0) {
            a[i] = -1;
            i++;
        }
        i = n - 1;
        while (a[i] == 0) {
            a[i] = -1;
            i--;
        }
        vector<int> v;
        for (i = 0; i < n; i++) {
            if (a[i] != -1) {
                v.push_back(a[i]);
            }
        }
        int ans = 0;
        for (i = 0; i < v.size(); i++) {
            if (v[i] == 0) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}