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
        int a[m][26];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 26; j++) {
                a[i][j] = 0;
            }
        }
        for (int i = 0; i < 2 * n - 1; i++) {
            string s; cin >> s;
            for (int i = 0; i < m; i++) {
                a[i][s[i] - 'a']++;
            }
        }
        string s;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < 26; j++) {
                if (a[i][j] % 2) {
                    s.push_back(char('a' + j));
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}