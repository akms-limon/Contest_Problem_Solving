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
        int hr, mn; 
        cin >> hr;
        char c; cin >> c;
        cin >> mn;
        if (hr > 0 && hr < 12) {
            if (hr < 10) cout << 0;
            cout << hr << c;
            if (mn < 10) cout << 0;
            cout << mn << " AM\n";
        }
        else if (hr == 0) {
            cout << 12 << c;
            if (mn < 10) cout << 0;
            cout << mn << " AM\n";
        }
        else if (hr == 12) {
            cout << 12 << c;
            if (mn < 10) cout << 0;
            cout << mn << " PM\n";
        }
        else {
            if (hr - 12 < 10) cout << 0;
            cout << hr - 12 << c;
            if (mn < 10) cout << 0;
            cout << mn << " PM\n";
        }
    }
    return 0;
}