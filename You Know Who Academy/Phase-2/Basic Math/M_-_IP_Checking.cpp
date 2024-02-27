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

bool check(int *a, int *p) {
    if (*a % 2 == 0) {
        if (*p % 10 != 0) {
            *a /= 2; 
            *p /= 10;
            return false;
        }
    }
    else {
        if (*p % 10 != 1) {
            *a /= 2; 
            *p /= 10;
            return false;
        }
    }
    *a /= 2; 
    *p /= 10;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int cs = 1;
    tc{
        int a, b, c, d, p, q, x, y;
        char ch;
        cin >> a >> ch >> b >> ch >> c >> ch >> d;
        cin >> p >> ch >> q >> ch >> x >> ch >> y;
        bool bl = true;
        for (int i = 0; i < 31; i++) {
            bl &= check(&a, &p);
            bl &= check(&b, &q);
            bl &= check(&c, &x);
            bl &= check(&d, &y);
        }
        if (bl) cout << "Case " << cs++ << ": Yes\n";
        else cout << "Case " << cs++ << ": No\n";
    }
    return 0;
}