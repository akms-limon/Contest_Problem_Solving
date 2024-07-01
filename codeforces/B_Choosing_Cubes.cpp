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
        int n, f, k; cin >> n >> f >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int temp = a[f - 1];
        int age = 0, pore = 0;
        sort(a, a + n);
        reverse(a, a + n);
        for (int i = 0; i < k; i++) {
            if (a[i] == temp) {
                age++;
            }
        }
        for (int i = k; i < n; i++) {
            if (a[i] == temp) {
                pore++;
            }
        }
        if (!pore) {
            cout << "YES" << '\n';
        }
        else if (!age) {
            cout << "NO" << '\n';
        }
        else {
            cout << "MAYBE" << '\n';
        }
    }
    return 0;
}