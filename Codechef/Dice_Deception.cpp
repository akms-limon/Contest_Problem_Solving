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
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                a[i] = 6;
                cnt++;
            }
            if (a[i] == 2) {
                a[i] = 5;
                cnt++;
            }
            if (a[i] == 3) {
                a[i] = 4;
                cnt++;
            }
            if (cnt == k) break;
        }
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        cout << sum << '\n';
    }
    return 0;
}