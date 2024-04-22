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
        int n, x, y; cin >> n >> x >> y;
        int a[n];
        map<int,int> mp;
        for (int i = 0; i < x; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + x);
        if (a[x - 1] == x) swap(a[x - 1], a[x - 2]);
        for (int i = 0; i < x; i++) {
            
        }
    }
    return 0;
}