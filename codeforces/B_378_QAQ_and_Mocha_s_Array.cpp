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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool bl = true;
        sort(a, a + n);
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (a[i] % a[0] != 0) {
                v.push_back(a[i]);
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++) {
            if (v[i] % v[0] != 0) {
                bl = false;
            }
        }
        if (bl) {
            yes;
        }
        else {
            no;
        }
    }
    return 0;
}