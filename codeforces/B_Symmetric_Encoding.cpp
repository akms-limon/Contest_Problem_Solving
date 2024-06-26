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
        string s; cin >> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++) {
            st.insert(s[i]);
        }
        map<char, char> mp;
        string temp;
        for (auto it : st) {
            temp.push_back(it);
        }
        for (int i = 0, j = temp.size() - 1; i < temp.size(); i++, j--) {
            mp[temp[i]] = temp[j];
        }
        for (int i = 0; i < s.size(); i++) {
            cout << mp[s[i]];
        }
        cout << '\n';
    }
    return 0;
}