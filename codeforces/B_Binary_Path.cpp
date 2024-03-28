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
        string s1, s2; cin >> s1 >> s2;
        ll a = 1, first = 0, last = n - 1;
        string s;
        for (int i = n - 2; i >= 0; i--) {
            if (s2[i] < s1[i + 1]) {
                last = i;
            }
        }
        for (int i = 1; i <= last; i++) {
            if (s1[i] < s2[i - 1]) {
                first = i;
            }
        }
        for (int i = 0; i <= first; i++) {
            s.push_back(s1[i]);
        }
        for (int i = first + 1; i <= last; i++) {
            s.push_back(min(s1[i], s2[i - 1]));
        }
        for (int i = last; i < n; i++) {
            s.push_back(s2[i]);
        }
        cout << s << '\n' << (last - first) + 1 << '\n';
    }
    return 0;
}