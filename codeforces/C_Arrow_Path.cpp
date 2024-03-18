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
        string a, b; cin >> a >> b;
        bool bl = true;
        for (int i = 1; i < n - 1; i+=2) {
            if (a[i] == '<') {
                if (!(b[i - 1] == '>' && b[i + 1] == '>')) {
                    bl = false;
                }
            }
        }
        if (b[n - 2] != '>') bl = false; 
        if (bl) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}