#include <bits/stdc++.h>
#define nl "\n"
#define nll cout << "\n"
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define cinx(array)           \
    {                         \
        for (auto &x : array) \
            cin >> x;         \
    }
#define coutx(array)          \
    {                         \
        for (auto x : array)  \
            cout << x << " "; \
        cout << endl;         \
    }
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, z, n;
    cin >> x >> y >> z >> n;
    int tot = x * y;
    int pp = ceil((double)tot * 0.6);
    int rem = pp - n;
    int wek = x - z;
    if (rem <= 0)
    {
        cout << "Yes\n";
        for (int i = 0; i < wek; i++)
        {
            cout << 0 << " ";
        }
        cout << "\n";
        return 0;
    }
    if ((wek * y) < rem)
    {
        cout << "No"
             << "\n";
    }
    else
    {
        cout << "Yes"
             << "\n";

        int num = floor(rem / (wek * 1.0000));
        vector<int> ans(wek, 0);
        int extra = rem - (num * wek);
        for (int i = 0; i < wek; i++)
        {
            if (rem >= y)
            {
                ans[i] = y;
                rem -= y;
            }
            else
            {
                ans[i] = rem;
                break;
            }
        }
        reverse(ans.begin(), ans.end());
        for (int i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}