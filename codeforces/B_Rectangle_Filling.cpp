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
        int n, m; cin >> n >> m;
        char a[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        if (m == 1) {
            if (a[0][0] == a[n - 1][0]) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
        else if (n == 1) {
            if (a[0][0] == a[0][m - 1]) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
        else {
            int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
            int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
            char c1 = 'W', c2 = 'B';
            for (int i = 0; i < 1; i++) {
                for (int j = 0; j < m; j++) {
                    if(a[i][j] == 'W') cnt1++;
                    if(a[i][j] == 'B') d1++;
                }
            }
            for (int i = n - 1; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if(a[i][j] == 'W') cnt2++;
                    if(a[i][j] == 'B') d2++;
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < 1; j++) {
                    if(a[i][j] == 'W') cnt3++;
                    if(a[i][j] == 'B') d3++;
                }
            }
            for (int i = 0; i < n; i++) {
                for (int j = m - 1; j < m; j++) {
                    if(a[i][j] == 'W') cnt4++;
                    if(a[i][j] == 'B') d4++;
                }
            }
            if ((d1 && d2 && d3 && d4) || (cnt1 && cnt2 && cnt3 && cnt4)) {
                cout << "YES" << '\n';
            }
            else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}