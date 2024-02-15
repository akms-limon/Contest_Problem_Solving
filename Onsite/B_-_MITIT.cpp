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
        bool bl = false;
        for (int i = 0; i < n - 2; i++) {
            int l = (n - i - 1);
            if (l % 2 == 0) {
                string s1, s2;
                for (int j = i + 1, k = i + (l / 2) + 1; j <= i + (l / 2); j++, k++) {
                    s1.push_back(s[j]);
                    s2.push_back(s[k]);
                }
                if (s1 == s2) {
                    bl = true;
                    break;
                }
            }
        }
        if (bl) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}