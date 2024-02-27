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

    int cs = 1;
    tc{
        string a; cin >> a;
        int b; cin >> b;
        ll ans = 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != '-')
            ans = (ans * 10 + (a[i] - '0')) % b;
        }
        if (ans) cout << "Case " << cs++ << ": not divisible\n";
        else cout << "Case " << cs++ << ": divisible\n";
    }
    return 0;
}