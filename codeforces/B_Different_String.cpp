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
        string ss = s, s1 = s;
        sort(s1.begin(), s1.end());
        sort(ss.begin(), ss.end());
        reverse(ss.begin(), ss.end());
        if (ss != s) {
            cout << "YES" << '\n';
            cout << ss << '\n';
        }
        else if (s1 != s) {
            cout << "YES" << '\n';
            cout << s1 << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}