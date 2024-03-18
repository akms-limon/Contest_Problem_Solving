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
        int a[n];
        ll sum = 0;
        bool bl = false;
        for (int i = 0; i < n ; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 3 == 1) bl = true;
        }
        if (sum % 3 == 0) cout << 0 << '\n';
        else if (sum % 3 == 2) cout << 1 << '\n';
        else {
            if (bl) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
    }
    return 0;
}