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
        int n, k; cin >> n >> k;
        vector<int> v;
        int x = 1;
        while (x < k) {
            x <<= 1;
            x |= 1;
        }
        if (n == 1) {
            v.push_back(k);
        }
        else {
            x >>= 1;
            v.push_back(x);
            v.push_back(k - x);
            while (v.size() < n) {
                v.push_back(0);
            }
        }
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}