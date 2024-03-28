<<<<<<< HEAD
/**
 *    author: A K M S Limon
 *    created: 16-March-2024  12:05:04
**/
#include <bits/stdc++.h>
#define ll long long
=======
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
>>>>>>> be5199954db1d5caed1999d4226d2a9eec65c1dd
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

<<<<<<< HEAD
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size(); 
        for (int i = 0; i < n; i++) {
            
        }
=======
    tc{
        string s; cin >> s;
        int n = s.size();
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            int cnt = 0;
            for (int j = 0; j < n - i; j++) {
                if (s[j] == s[j + i] || s[j] == '?' || s[j + i] == '?') {
                    cnt++;
                }
                else {
                    cnt = 0;
                }
                if (cnt == i) {
                    ans = i;
                    break;
                }
            }
        }
        cout << ans * 2 << '\n';
>>>>>>> be5199954db1d5caed1999d4226d2a9eec65c1dd
    }
    return 0;
}