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
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                mp[b[i]]++;
            }
        }
        int m; cin >> m;
        int d[m];
        map<int, int> mp1;
        bool bl = false;
        for (int i = 0; i < m; i++) {
            cin >> d[i];
            if (mp[d[i]] > 0) {
                mp1[d[i]]++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (d[m - 1] == b[i]) {
                bl = true;
            }
        }
        for (auto it : mp) {
            if (it.second > mp1[it.first]) {
                bl = false;
            }
        }
        if (bl) yes;
        else no;
    }
    return 0;
}