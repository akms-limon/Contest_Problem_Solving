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
        int pre[n + 1];
        pre[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> pre[i];
            pre[i] += pre[i - 1];
        }
        int h = n, l = 1, mid;
        while (l < h) {
            mid = (l + h) / 2;
            cout << "? " << mid - l + 1 << ' ';
            for (int i = l; i <= mid; i++) {
                cout << i << ' ';
            }
            cout << endl;
            int sum; cin >> sum;
            if (sum > pre[mid] - pre[l - 1]) {
                h = mid;
            }
            else {
                l = mid + 1;
            }
        }
        cout << "! " << l << endl;
    }
    return 0;
}