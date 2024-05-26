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
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                cnt++;
            }
        }
        if (a[n - 1] > a[0]) cnt++;
        if (cnt > 1) {
            no;
        }
        else {
            yes;
        }
    }
    return 0;
}