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
        string s1 = s;
        sort(s.begin(), s.end());
        bool bl = false;
        if (s1 == s) {
            bl = true;
            for (int i = 0; i < n; i++) {
                if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z')) {

                }
                else {
                    bl = false;
                }
            }
        }
        if (bl) yes;
        else no;
    }
    return 0;
}