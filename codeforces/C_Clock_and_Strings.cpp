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
        int a, b, c, d; cin >> a >> b >> c >> d;
        if (a > b) {
            swap(a, b);
        }
        if (c > d) {
            swap(c, d);
        }
        int aa[13]; 
        for (int i = 1; i <= 12; i++) {
            aa[i] = 0;
        }
        aa[a] = 1, aa[b] = 1;
        vector<int> v1;
        for (int i = a + 1; i < b; i++) {
            v1.push_back(i);
        }
        for (int j = 0; j < v1.size(); j++) {
            aa[v1[j]] = 1;
        }
        vector<int> v2;
        for (int i = 1; i <= 12; i++) {
            if (aa[i] == 0) {
                v2.push_back(i);
            }
        }
        bool x = false, y = false, p = false, q = false;
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] == c) {
                x = true;
            }
            if (v1[i] == d) {
                p = true;
            }
        }
        for (int i = 0; i < v2.size(); i++) {
            if (v2[i] == d) {
                y = true;
            }
            if (v2[i] == c) {
                q = true;
            }
        }
        if ((p & q) || (x & y)) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}