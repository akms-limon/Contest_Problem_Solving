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
        vector<int> a, b;
        int p[n];
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            p[i] = x;
            if (i % 2) {
                a.push_back(x);
            }
            else {
                b.push_back(x);
            }
        }
        map<int, int> mp;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a[a.size() - 1] != n) {
            swap(a, b);
        }
        int temp = n;
        if (a[a.size() - 1] == n) {
            for (int i = 0; i < a.size(); i++) {
                mp[a[i]] = temp--;
            }
            for (int i = 0; i < b.size(); i++) {
                mp[b[i]] = temp--;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << mp[p[i]] << ' ';
        }
        cout << '\n';
    }
    return 0;
}