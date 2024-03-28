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
        vector<pair<int, int>> v;
        set<int> s;
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
            m[a[i]]++;
        }
        int check = 0, nei = s.size();
        for (auto it : s) {
            if (it != check) {
                nei = check;
                break;
            }
            check++;
        }
        bool bl = true;
        for (auto it : m) {
            if (it.first > nei) {
                break;
            }
            if (it.second < 2) {
                bl = false;
            }
        }
        if (bl == false) cout << -1 << '\n';
        else {
            int init, end;
            for (int i = 0; i < n; i++) {
                set<int> s;
                init = i + 1;
                while (i < n && s.size() < nei) {
                    if (a[i] < nei)
                    s.insert(a[i]);
                    i++;
                }
                end = i;
                break;
            }
            if (end == 0) end++;
            set<int> s;
            bool ans = true;
            for (int i = end - 1; i < n; i++) {
                if (a[i] < nei)
                s.insert(a[i]);
            }
            if (s.size() != nei) ans = false;
            if (ans) { 
                cout << 2 << '\n';
                cout << init << ' ' << end << '\n';
                cout << end + 1 << ' ' << n << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}