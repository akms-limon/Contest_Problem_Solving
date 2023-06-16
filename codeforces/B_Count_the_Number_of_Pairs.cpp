/**
 *    author: A K M S Limon
 *    created: 02-March-2023  20:56:37
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 3.14159
#define pii pair<int,int>
#define dbg(x) cerr<<x<<"\n"
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fl(i,a,b) for(int i = a; i <= b; i++)
#define fll(i,a,b) for(int i = a; i >= b; i--)
#define ff first
#define ss second
#define flit(v) for(auto it=v.begin(); it!=v.end(); it++)
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
#define sumx(array,sum) { for (auto x: array) sum+=x;  }
using namespace std;

int isSubstring(string s, string sub) {
    if (s.find(sub) != string::npos)
       return s.find(sub);
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        tc{
            int n, k; cin>>n>>k;
            string s; cin>>s;
            sort(s.begin(), s.end());
            string big, sm;
            for (int i = 0; i < n; i++)
            {
                if(s[i]>='A' && s[i]<='Z'){
                    big.push_back(s[i]);
                }
                else {
                    sm.push_back(s[i]);
                }
            }
            sort(big.rbegin(), big.rend());
            sort(sm.rbegin(), sm.rend());
            int cnt = 0;
            for (int i = 0; i < big.size(); i++)
            {
                if(big[i]>='A' && big[i]<='Z')
                big[i]=big[i]-'A'+'a';
            }
            int i = big.size()-1, j= sm.size()-1;
            while(i>=0 && j>=0){
                if(big[i]==sm[j]){
                    big[i]='0'; sm[j]='0';
                    cnt++; i--, j--;
                }
                else {
                    if(big[i]<sm[j]){
                        i--;
                    }
                    else {
                        j--;
                    }
                }
            }
            string sf, ss = big+sm;
            sort(ss.begin(), ss.end());
            for (int x = 0; x < ss.size(); x++)
            {
                if(ss[x]!='0') sf.push_back(ss[x]);
            }
            if(sf.size()>1){
            for (int y = 0; y < sf.size()-1; y++)
            {
                if(sf[y]==sf[y+1] && k>0){
                    cnt++;
                    y++;
                    k--;
                }
            }}
            cout<<cnt<<endl;
        }
    return 0;
}