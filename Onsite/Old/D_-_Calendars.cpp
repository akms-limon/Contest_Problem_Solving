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

vector<int> v[200];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;
    for (ll i = 0; i < n; i++) {
        ll p; cin >> p;
        for (ll j = 0; j < p; j++) {
            ll day; cin >> day;
            v[i].push_back(day);
        }
    }
    ll q; cin >> q;
    for (ll i = 1; i <= q; i++) {
        ll cal1, cal2, day, month, year;
        cin >> cal1 >> cal2 >> day >> month >> year;
        ll total_days = 0, extra_days = day;
        for (ll j = 0; j < v[cal1 - 1].size(); j++) {
            if(j + 1 < month) extra_days += v[cal1 - 1][j];
            total_days += v[cal1 - 1][j]; 
        }
        total_days *= (year - 1);
        total_days = total_days + extra_days;
        ll total_days_cal2 = 0;
        for (ll k = 0; k < v[cal2 - 1].size(); k++) {
            total_days_cal2 += v[cal2 - 1][k];
        }
        ll year_cal2 = (total_days / total_days_cal2) + 1, month_cal2 = 0;
        total_days %= total_days_cal2;
        if (total_days == 0) {
            year_cal2--;
            total_days += total_days_cal2;
        }
        for (ll k = 0; k < v[cal2 - 1].size(); k++) {
            month_cal2 ++;
            if (total_days <= v[cal2 - 1][k]) {
                break;
            }
            total_days -= v[cal2 - 1][k];
        }
        cout << "Query " << i << ": " << total_days << ' ' << month_cal2 << " " << year_cal2 << '\n';
    }
    return 0;
}