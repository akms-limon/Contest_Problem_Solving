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
        for (int i = 0; i < n; i++) {
            string s1, s2;
            for (int j = 0; j < n; j++) {
                if (i % 2 == 0) {
                    if (j % 2) {
                        s1.push_back('.');
                        s1.push_back('.');
                    }
                    else {
                        s1.push_back('#');
                        s1.push_back('#');
                    }
                }
                else {
                    if (j % 2) {
                        s2.push_back('#');
                        s2.push_back('#');
                    }
                    else {
                        s2.push_back('.');
                        s2.push_back('.');
                    }
                }
            }
            if (i % 2 == 0) 
            cout << s1 << '\n' << s1 << '\n';
            else 
            cout << s2 << '\n' << s2 << '\n';
        }
    }
    return 0;
}