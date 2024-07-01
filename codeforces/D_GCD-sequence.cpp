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
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            b[i] = __gcd(a[i], a[i + 1]);
        }
        int index = -1;
        for (int i = 0; i < n - 1; i++) {
            if (b[i] < b[i - 1]) {
                index = i + 1;
            }
        }
        int c[n - 1];
        for (int i = 0; i < index; i++) {
            c[i] = a[i];
        }
        for (int i = index + 1; i < n; i++) {
            c[i - 1] = a[i];
        }
        int d[n - 2];
        for (int i = 0; i < n - 2; i++) {
            d[i] = __gcd(c[i], c[i + 1]);
        }
        bool bl = true;
        for (int i = 1; i < n - 2; i++) {
            if (d[i] < d[i - 1]) {
                bl = false;
            }
        }
        bool bl2 = true;
        index--;
        for (int i = 0; i < index; i++) {
            c[i] = a[i];
        }
        for (int i = index + 1; i < n; i++) {
            c[i - 1] = a[i];
        }
        for (int i = 0; i < n - 2; i++) {
            d[i] = __gcd(c[i], c[i + 1]);
        }
        for (int i = 1; i < n - 2; i++) {
            if (d[i] < d[i - 1]) {
                bl2 = false;
            }
        }
        bool bl3 = true;
        index--;
        for (int i = 0; i < index; i++) {
            c[i] = a[i];
        }
        for (int i = index + 1; i < n; i++) {
            c[i - 1] = a[i];
        }
        for (int i = 0; i < n - 2; i++) {
            d[i] = __gcd(c[i], c[i + 1]);
        }
        for (int i = 1; i < n - 2; i++) {
            if (d[i] < d[i - 1]) {
                bl3 = false;
            }
        }
        if (bl || bl2 || bl3) yes;
        else no;
    }
    return 0;
}