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
        string s; cin >> s;
        int cnt = 0, bl = false;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                cnt++;
            }
        }
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '1' && s[i + 1] == '1') {
                bl = true;
            }
        }
        if (cnt % 2 || (cnt == 2 && bl)) {
            no;
        }
        else {
            yes;
        }
    }
    return 0;
}