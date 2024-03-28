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

map<int, int> freq;

vector<int> extractDigit(int n) {
    vector<int> digit;

    while (n > 0) {
        int tmp = n % 10;
        n /= 10;
        digit.push_back(tmp);
    }

    return digit;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, q;
    cin >> n >> q;

    set<int> st;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        st.insert(a);
    }

    for(int ele : st) {
        vector<int> dgts = extractDigit(ele);

        for (int i : dgts) {
            freq[i]++;
        }
    }

    while (q--) {
        char tag;
        int k;
        cin >> tag >> k;

        if (tag == '+') {
            auto it = st.find(k);

            vector<int> dgts = extractDigit(k);
            if (it != st.end()) {
                st.erase(it);

                for (int d : dgts) {
                    freq[d]--;
                }
            } else {
                st.insert(k);
                for (int d : dgts) {
                    freq[d]++;
                }
            }
        } else if (tag == '-') {
            auto rit = st.rbegin();
            if (st.size() >= k) {
                advance(rit, k - 1);
                
                int num = *rit;
                vector<int> dgts = extractDigit(num);
                st.erase(--rit.base());
                for (int d : dgts) {
                    freq[d]--;
                }
            }
        } else {
            auto it = st.find(k);
            if (it != st.end()) {
                vector<int> dgts = extractDigit(k);

                int ans = 0;
                for (int d : dgts) {
                    ans += freq[d];
                }
                cout << ans << nl;
            } else {
                cout << -1 << nl;
            }
        }
    }
    
    return 0;
}