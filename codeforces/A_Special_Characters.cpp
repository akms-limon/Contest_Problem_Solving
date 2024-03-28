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
        if (n % 2) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
            for (int i = 0; i < n / 2; i++) {
                if (i % 2) {
                    cout << "AA";
                }
                else {
                    cout << "BB";
                }
            }
            cout << '\n';
        }
    }
    return 0;
}