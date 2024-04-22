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

bool check(int n) {
    while (n) {
        if (!(n % 10 == 0 || n % 10 == 1)) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<int> v;
    for (int i = 2; i <= 32; i++) {
        int x = i; string s; 
        while (x) {
            if (x & 1) {
                s.push_back('1');
            }
            else {
                s.push_back('0');
            }
            x >>= 1;
        }
        reverse(s.begin(), s.end());
        int temp = 0;
        for (int i = 0; i < s.size(); i++) {
            temp *= 10;
            temp += (s[i] - '0');
        }
        v.push_back(temp);
    }
    tc{
        int nn, n; cin >> nn;
        n = nn;
        for (int i = 0; i < v.size(); i++) {
            while (n % v[i] == 0) {
                n /= v[i];
            }
        }
        if (n < 2 || check(nn)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}