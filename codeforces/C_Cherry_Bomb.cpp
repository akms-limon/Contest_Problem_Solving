#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define int long long
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction(n) cout << fixed << setprecision(n);

int t = 1 ;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    set<int> temp;
    for (auto &i : a)
        cin >> i;
    for (auto &i : b)
        cin >> i;

    int mx = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (b[i] > -1)
        {
            temp.insert(a[i]+b[i]);
        }
    }
    if (temp.size() > 1)
    {
        cout << 0 << nl;
    }
    else {
      if (temp.size() == 0) {
        cout << k - (mx - mn) + 1 << nl;
      }
      else {
        bool bl = true;
        int ele = *temp.begin();
        for (int i = 0; i < n; i++) {
          int x = ele - a[i];
          if (x < 0 || x > k) {
            bl = false;
            break;
          }
        }
        if (bl == false) {
          cout << 0 << nl;
        }
        else {
          cout << 1 << '\n';
        }
      }
    }
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
