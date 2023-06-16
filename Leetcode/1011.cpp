/**
 *    author: A K M S Limon
 *    created: 22-February-2023  16:31:04
 **/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout << "\n"
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define MOD 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pii pair<int, int>
#define dbg(x) cerr << x << "\n"
#define mp(x, y) make_pair(x, y)
#define yes cout << "YES" \
                 << "\n"
#define no cout << "NO" \
                << "\n"
#define fl(i, a, b) for (int i = a; i <= b; i++)
#define fll(i, a, b) for (int i = a; i >= b; i--)
#define ff first
#define ss second
#define flit(v) for (auto it = v.begin(); it != v.end(); it++)
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
#define sumx(array, sum)     \
    {                        \
        for (auto x : array) \
            sum += x;        \
    }
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> weights; 
    int a, days;
    while(cin>>a){
        weights.push_back(a);
    }
    days = weights[weights.size()-1];
    weights.pop_back();
    long long sum = 0, lo, hi, mid, ck, mx = 0, cnt=0, ans=0;
    for (int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
        if (weights[i] > mx)
        {
            mx = weights[i];
        }
    }
    lo = mx, hi = sum;
    while (hi - lo >= 0)
    {   
        cnt = 0;
        mid = (lo + hi) / 2;
        for (int i = 0; i < weights.size(); i++)
        {
            ck = 0;
            while (ck <= mid && i < weights.size())
            {
                ck += weights[i];
                i++;
            }
            if (ck <= mid)
            {
                cnt++;
            }
            else
            {
                cnt++;
                i--;
                ck -= weights[i];
            }
            i--;
        }
        if (cnt <= days)
        {
            hi = mid-1;
        }
        else if (cnt > days)
        {
            lo = mid + 1;
        }
    }
    cout<<lo<<endl;

    return 0;
}