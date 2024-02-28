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
        int n, m, x, y, l;
        cin >> n >> m >> x >> y >> l;
        ll row = 1, col =1;
        row += ((x - 1) / l + (n - x) / l);
        col += ((y - 1) / l + (m - y) / l);
        cout << row * col << '\n';
    }
    return 0;
}