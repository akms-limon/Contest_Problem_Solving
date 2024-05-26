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
        int cnt = 0;
        bool bl = false;
        for (int i = 0; i < s.size(); i++) {
            while (s[i] == s[i + 1] && i < s.size() - 1) {
                i++;
            }
            if (s[i] == '0' && s[i + 1] == '1') {
                bl = true;
            }
            cnt++;
        }
        if (bl) cnt--;
        cout << cnt << '\n';
    }
    return 0;
}