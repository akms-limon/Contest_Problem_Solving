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

    int cs = 1;
    tc{
        string s; cin >> s;
        cout << "Case " << cs++ << ": ";
        for (int i = 0; i < s.size(); i++) {
            if (i == 4 && s[i] != 's') {
                cout << 's';
            }
            cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}