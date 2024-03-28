#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc ll t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

const int mod = 1000000000 + 7;

ll maxSubArraySum(ll a[], ll size)
{
    ll max_so_far = LONG_LONG_MIN, max_ending_here = 0;
 
    for (ll i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        ll n, k; cin >> n >> k;
        ll a[n];
        vector<int> v;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            v.push_back(a[i]);
        }
        ll max_sum = maxSubArraySum(a, n);
        if (max_sum < 0) max_sum = 0;
        for (int i = 0; i < k; i++) {
            max_sum %= mod;
            v.push_back(max_sum);
            max_sum *= 2;
        }
        ll sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum = (sum % mod + v[i] % mod) % mod;
        }
        sum += mod;
        sum %= mod;
        cout << sum << '\n';
    }
    return 0;
}