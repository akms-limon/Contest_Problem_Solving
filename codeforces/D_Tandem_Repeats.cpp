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
        string s; cin >> s;
        int n = s.size();
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            for (int j = 0; j < n - i; j++) {
                if (s[j] == s[j + i] || s[j] == '?' || s[j + i] == '?') {
                    cnt++;
                }
                else {
                    cnt = 0;
                }
                if (cnt == i) {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans * 2 << '\n';
    }
    return 0;
}