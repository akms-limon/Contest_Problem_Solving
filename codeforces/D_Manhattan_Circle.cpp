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
        int fr = -1, lr = -1, fc = -1, lc = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == '#' && fr == -1) {
                    fr = i + 1;
                }
                if (a[i][j] == '#') {
                    lr = i + 1;
                }
            }
        }
        for (int j = 0; j < m; j++) {
            for (int i = 0; i < n; i++) {
                if (a[i][j] == '#' && fc == -1) {
                    fc = j + 1;
                }
                if (a[i][j] == '#') {
                    lc = j + 1;
                }
            }
        }
        cout << (fr + lr + 1) / 2  <<  ' ' << (fc + lc + 1) / 2 << '\n';
    }
    return 0;
}