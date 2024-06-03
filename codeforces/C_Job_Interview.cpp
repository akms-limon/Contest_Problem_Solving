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
        int n, m; cin >> n >> m;
        int x = n + m + 1;
        int a[x], b[x];
        for (int i = 0; i < x; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < x; i++) {
            cin >> b[i];
        }
        int n_cnt = 0, m_cnt = 0, index = x - 1;
        for (int i = 0; i < x; i++) {
            if (a[i] > b[i]) {
                if (n_cnt != n) {
                    n_cnt++;
                }
                else {
                    index = i;
                    break;
                }
            }
            else {
                if (m_cnt != m) {
                    m_cnt++;
                }
                else {
                    index = i;
                    break;
                }
            }
        }
        n_cnt = 0, m_cnt = 0;
        ll p = 0, t = 0;
        map<int, char> mp;
        for (int i = 0; i < x; i++) {
            if (i != index) {
                if (a[i] > b[i] && n_cnt != n) {
                    p += a[i];
                    n_cnt++;
                    mp[i] = 'p';
                }
                else {
                    if (m_cnt != m) {
                        t += b[i];
                        m_cnt++;
                        mp[i] = 't';
                    }
                    else {
                        p += a[i];
                        n_cnt++;
                        mp[i] = 'p';
                    }
                }
            }
        }
        for (int i = 0; i < x; i++) {
            ll c, d;
            if (mp[i] == 'p') {
                c = p - a[i] + a[index];
                d = t;
            }
            else {
                c = p;
                d = t + b[index] - b[i];
            }
            cout << c + d << ' ';
        }
        cout << '\n';
    }
    return 0;
}