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
        int p1, p2, p3; cin >> p1 >> p2 >> p3;
        int sum = 0;
        sum += (p1 + p2 + p3);
        p1 = min(p1, min(p2, p3));
        p3 = max(p1, max(p2, p3));
        p2 = sum - (p1 + p3);
        int cnt = 0;
        if ((p1 + p2 + p3) % 2) {
            cout << -1 << '\n';
        }
        else {
            while (p3 > 0 && p2 > 0) {
                p3--, p2--;
                sum = (p1 + p2 + p3);
                p1 = min(p1, min(p2, p3));
                p3 = max(p1, max(p2, p3));
                p2 = sum - (p1 + p3);
                cnt++;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}