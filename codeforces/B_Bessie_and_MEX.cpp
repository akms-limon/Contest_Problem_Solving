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
        int a[n], if_a[n + 1], if_mex[n + 1], b[n];
        for (int i = 0; i <= n; i++) {
            if_a[i] = 0;
            if_mex[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int mex = 0;
        if (a[0] == 1) mex = 1;
        if_mex[0] = 1;
        for (int i = 0; i < n; i++) {
            int temp = mex - a[i];
            if (temp < 0) {
                mex++;
                i--;
                continue;
            }
            if (if_a[temp] == 0) {
                b[i] = temp;
                if_a[temp] = 1;
            }
            else {
                mex++;
                i--;
                continue;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << b[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}