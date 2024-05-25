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
        int a[n], b[n + 1];
        for (int i = 1; i < n; i++) {
            cin >> a[i];
        }
        b[0] = a[1] + 1;
        for (int i = 1; i < n - 1; i++) {
            int temp = a[i + 1] / b[i - 1];
            temp++;
            temp *= b[i - 1];
            temp += a[i];
            b[i] = temp;
        }
        b[n - 1] = a[n - 1];
        for (int i = 0; i < n; i++) {
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}