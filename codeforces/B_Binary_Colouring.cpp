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
        bitset<32> b(n);
        vector<int> v;
        for (int i = 0; i < 32; i++) {
            v.push_back(b[i]);
        }
        for (int i = 0; i < 32 - 1; i++) {
            int cnt = 1;
            while ((v[i] == 1) && (v[i + 1] == 1) && i < 31) {
                v[i] = 0;
                cnt++;
                i++;
            }
            if (cnt > 1) {
                v[i] = 0;
                v[i + 1] = 1;
                v[i - cnt + 1] = -1;
            }
        }
        cout << v.size() << '\n';
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}