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

const int N = 1e6 + 9;
double p[N];

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    p[0] = 0;
    for (int i = 1; i < N; i++) {
        p[i] = log2(i);
        p[i] += p[i - 1];
    }
    
    int cs = 1;
    tc{
        int n, b; cin >> n >> b;
        double ans = p[n] / log2(b) + 1;
        cout << "Case " << cs++ << ": " << (int) ans << '\n'; 
    }
    return 0;
}