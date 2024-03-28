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
        int n, xm, a, c;
        cin >> n >> xm >> a >> c;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool alarm = false;
        int ans = 0;

        int ca = 0, cc = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] > xm) {
                ca++;
                cc = 0;
            } else {
                cc++;
                ca = 0;
            }

            if (ca >= a) {
                alarm = true;
            }
            if (cc >= c) {
                alarm = false;
            }

            if (alarm) {
                ans++;
            }
        }

        cout << ans << nl;
    }
    return 0;
}