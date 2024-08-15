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
        int n, m, k; cin >> n >> m >> k;
        string s; cin >> s;
        s.push_back('L');
        int pre = -12, post = -1;
        bool bl = true;
        for (int i = 0; i <= n; i++) {
            if (s[i] == 'L') {
                pre = post;
                post = i;
                if (post - pre > m) {
                    int j = post - 1, cnt = 0, temp = (post - pre) - m;
                    while (s[j] == 'W') {
                        cnt++;
                        j--;
                        if (cnt == temp) {
                            break;
                        }
                    }
                    if (cnt != temp) {
                        bl = false;
                    }
                    k -= cnt;
                }
                pre = post;
            }
        }
        if (bl && k >= 0) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}