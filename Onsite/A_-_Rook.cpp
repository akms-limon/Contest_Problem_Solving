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
        char c = s[0];
        int x = (s[1] - '0');
        for (char i = 'a'; i <= 'h'; i++) {
            if (i != c) {
                cout << i << x << '\n';
            }
        }
        for (int i = 1; i <= 8; i++) {
            if (i != x) {
                cout << c << i << '\n';
            }
        }
    }
    return 0;
}