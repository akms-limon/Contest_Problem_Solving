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
        int a, b, c; cin >> a >> b >> c;
        if (a < b && b < c) {
            cout << "STAIR" << '\n';
        }
        else if (a < b && b > c) {
            cout << "PEAK" << '\n';
        }
        else {
            cout << "NONE" << '\n';
        }
    }
    return 0;
}